#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int proximidade(vector<int> v){
    int briga = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i - 1] >= 30 && v[i] >= 50 && v[i + 1] >= 30){
            briga++;
        }
        return briga;
}
int apaziguado(vector<int> v){
    vector<int> paz;
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= 80 && v[i + 1] <= 10){
            paz.push_back(v[i]);
        }
    }
}