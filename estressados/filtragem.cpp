<<<<<<< HEAD
//Filter - Operações de Filtragem: 4 funções
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;
//clonar: retorna um novo vetor copiando os valores do vetor de entrada
vector<int> clone(vector<int> v)
{
    vector<int> new_vec(v.begin(), v.end());
    std::copy(v.begin(), v.end(), new_vec.begin());  

    return new_vec;
}
//pegar_homens: retorne uma lista com os homens (valores positivos)
vector<int> pegar_homens(vector<int> v){
    vector<int> homens;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > 0)
        homens.push_back(v[i]);
    }
    return homens;
}
//pegar_calmos: retorne uma lista com as pessoas com stress menor que 10 (positivos menor que 10) (abs)
vector<int> pegar_calmos(vector<int> v){

    vector<int> calmos;
    for (int i = 0; i < v.size(); i++){
        if (abs(v[i]) < 10)
            calmos =  v[i];
    }
    return calmos;
}
//pegar_mulheres_calmas: retorne uma lista com as mulheres com nível de stress menor que 10.(negativos menor que 10)
vector<int> pegar_mulheres_calmas(vector<int> v){
    vector<int> mulheres_calmas;

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > -10 && v[i] < 0) 
        mulheres_calmas = v[i];
    }

    return mulheres_calmas;
}
int main(){

    cout << clone({-6, -7, -8, -9, -10, 6, 7, 8, 9, 10}) << "\n";
    cout << pegar_homens({-6, -7, -8, -9, -10, 6, 7, 8, 9, 10}) << "\n";
    cout << pegar_calmos({-6, -7, -8, -9, -10, 6, 7, 8, 9, 10}) << "\n";
    cout << pegar_mulheres_calmas({-6, -7, -8, -9, -10, 6, 7, 8, 9, 10}) << "\n";
    
    return 0;
=======
//Filter - Operações de Filtragem: 4 funções
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;
//clonar: retorna um novo vetor copiando os valores do vetor de entrada
vector<int> clone(vector<int> v)
{
    vector<int> new_vec(v.begin(), v.end());
    std::copy(v.begin(), v.end(), new_vec.begin());  

    return new_vec;
}
//pegar_homens: retorne uma lista com os homens (valores positivos)
vector<int> pegar_homens(vector<int> v){
    vector<int> homens;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > 0)
        homens.push_back(v[i]);
    }
    return homens;
}
//pegar_calmos: retorne uma lista com as pessoas com stress menor que 10 (positivos menor que 10) (abs)
vector<int> pegar_calmos(vector<int> v){

    vector<int> calmos;
    for (int i = 0; i < v.size(); i++){
        if (abs(v[i]) < 10)
            calmos =  v[i];
    }
    return calmos;
}
//pegar_mulheres_calmas: retorne uma lista com as mulheres com nível de stress menor que 10.(negativos menor que 10)
vector<int> pegar_mulheres_calmas(vector<int> v){
    vector<int> mulheres_calmas;

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > -10 && v[i] < 0) 
        mulheres_calmas = v[i];
    }

    return mulheres_calmas;
}
int main(){

    cout << clone({-6, -7, -8, -9, -10, 6, 7, 8, 9, 10}) << "\n";
    cout << pegar_homens({-6, -7, -8, -9, -10, 6, 7, 8, 9, 10}) << "\n";
    cout << pegar_calmos({-6, -7, -8, -9, -10, 6, 7, 8, 9, 10}) << "\n";
    cout << pegar_mulheres_calmas({-6, -7, -8, -9, -10, 6, 7, 8, 9, 10}) << "\n";
    
    return 0;
>>>>>>> 08977e69e66e0d77c5fb959b4131841000e69948
}