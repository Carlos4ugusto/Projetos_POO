#include <iostream>
#include <map>
#include <list>
#include <sstream>

class AccountException{
    public:
        AccountException(std::string msg) : msg(msg) {}
        std::string getMessage() { return msg; }
    private:
        std::string msg;
};

class Account {
    public:
        Account(int id, float balance, std::string clientId, std::string type) {
            this->id = id;
            this->balance = balance;
            this->clientId = clientId;
            this->type = type;
        }
        virtual void monthlyUpdate() {
            if (this->type == "CC") {
                this->balance -= 20;
            } else {
                this->balance *= 1.01;
            }
        }

        virtual void withdraw(float value) {
            if (this->balance >= value) {
                this->balance -= value;
            } else {
                throw AccountException("saldo insuficiente");
            }
        }

        virtual void deposit(float value) {
            this->balance += value;
        }

        virtual void transfer(Account *account, float value) {
            if (this->balance >= value) {
                this->balance -= value;
                account->balance += value;
            } else {
                throw AccountException("saldo insuficiente");
            }
        }

        int getId() { return this->id; }

        float getBalance() { return this->balance; }

        std::string getClientId() { return this->clientId; }

        std::string getType() { return this->type; }

        friend std::ostream& operator<<(std::ostream& os, Account& account) {
            os << account.getId() << ":" << account.getClientId() << ":" << account.getBalance() << ":" << account.getType();
            return os;
        }

    private:
        int id;
        float balance;
        std::string clientId;
        std::string type;
};

class CheckingAccount : public Account {
    public:
        CheckingAccount(int id, float balance, std::string clientId) : Account(id, balance, clientId, "CC") {}
};

class SavingAccount : public Account {
    public:
        SavingAccount(int id, float balance, std::string clientId) : Account(id, balance, clientId, "CP") {}
};

class Client {
    public:
        Client(std::string id) {
            this->id = id;
        }

        std::string getId() { return this->id; }

        void addAccount(Account *account) {
            this->accounts.push_back(account);
        }

        std::list<Account*> getAccounts() {
            return this->accounts;
        }

        friend std::ostream& operator<<(std::ostream& os, Client& client) {
            os << client.getId() << ":";
            for (std::list<Account*>::iterator it = client.accounts.begin(); it != client.accounts.end(); ++it) {
                os << **it << ",";
            }
            return os;
        }



    private:
        std::string id;
        std::list<Account*> accounts;
};

class BankAgency {
    public:
        BankAgency() {
            this->clients = std::map<std::string, Client*>();
        }

        void addClient(Client *client) {
            this->clients[client->getId()] = client;
        }

        Client* getClient(std::string id) {
            return this->clients[id];
        }

        std::map<std::string, Client*> getClients() {
            return this->clients;
        }

        friend std::ostream& operator<<(std::ostream& os, BankAgency& bankAgency) {
            for (std::map<std::string, Client*>::iterator it = bankAgency.clients.begin(); it != bankAgency.clients.end(); ++it) {
                os << *(it->second) << ",";
            }
            return os;
        }

    private:
        std::map<std::string, Client*> clients;
};

// solver do problema
int main() {
    BankAgency bankAgency;
    std::string line;
    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        std::string command;
        ss >> command;
        if (command == "addClient") {
            std::string id;
            ss >> id;
            Client *client = new Client(id);
            bankAgency.addClient(client);
        } else if (command == "addAccount") {
            std::string clientId;
            ss >> clientId;
            Client *client = bankAgency.getClient(clientId);
            if (client == NULL) {
                std::cout << "cliente nao encontrado" << std::endl;
            } else {
                std::string type;
                ss >> type;
                if (type == "CC") {
                    int id;
                    float balance;
                    ss >> id >> balance;
                    CheckingAccount *account = new CheckingAccount(id, balance, clientId);
                    client->addAccount(account);
                } else if (type == "CP") {
                    int id;
                    float balance;
                    ss >> id >> balance;
                    SavingAccount *account = new SavingAccount(id, balance, clientId);
                    client->addAccount(account);
                } else {
                    std::cout << "tipo de conta nao encontrado" << std::endl;
                }
            }
        } else if (command == "monthlyUpdate") {
            std::string clientId;
            ss >> clientId;
            Client *client = bankAgency.getClient(clientId);
            if (client == NULL) {
                std::cout << "cliente nao encontrado" << std::endl;
            } else {
                for (std::list<Account*>::iterator it = client->getAccounts().begin(); it != client->getAccounts().end(); ++it) {
                    (*it)->monthlyUpdate();
                }
            }
        } else if (command == "withdraw") {
            std::string clientId;
            ss >> clientId;
            Client *client = bankAgency.getClient(clientId);
        }
    }
    return 0;
}