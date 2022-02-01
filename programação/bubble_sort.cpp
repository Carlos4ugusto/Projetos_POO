#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int main(){
    double notas[10];

    
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(notas [j] > notas [j+1]){
                double aux = notas [j];
                notas [j] = notas [j+1];
                notas [j+1] = aux;
                printf("%d ",i);
            }
        }
    }
    for(int i=0;i<10;i++){
        cout << notas[i] << " | " << endl;
    }
    return 0; 
}
