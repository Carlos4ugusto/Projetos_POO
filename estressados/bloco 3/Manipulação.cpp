#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int casal(vector<int> &v) {
    int casal = 0;
    for (int i = 0; i < v.size; i++) {
        for (int j = 0; j < v.size; j++) {
            if (v[i] != 0 && v[j] != 0 && v[i] == v[j]) {
                casal++;
                v[i] = 0;
                v[j] = 0;
            }
        }
    }
    return casal;
}
int trio(vector<int> &v) {
    int trio = 0;
    for (int i = 0; i < v.size; i++) {
        for (int j = 0; j < v.size; j++) {
            for (int k = 0; k < v.size; k++) {
                if (v[i] != 0 && v[j] != 0 && v[k] != 0 && v[i] == v[j] && v[j] == v[k]) {
                    trio++;
                    v[i] = 0;
                    v[j] = 0;
                    v[k] = 0;
                }
            }
        }
    }
    return trio;
}

int main (){
    cout << trio({1, 2, 2, 3, -1, -1, -2, -3}) << endl;
    cout << casal({1, 2, 3, 4,, 5, -1, -2, -3}) << endl;

    return 0;
}