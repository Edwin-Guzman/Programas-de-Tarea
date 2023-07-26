/* Elaborar un programa que ingresa numeros aleatorios en una matriz de 3x3
y los mustre ordenados en otra*/

#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <algorithm> 
using namespace std;

int main() {
	
    srand(time(NULL));  

    int matrizOriginal[3][3];
    int matrizOrdenada[3][3];
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            matrizOriginal[i][j] = rand() % 100;
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            matrizOrdenada[i][j] = matrizOriginal[i][j];
        }
    }

    for (int i=0; i<3; i++) {
        sort(matrizOrdenada[i], matrizOrdenada[i] + 3);
    }

    cout<<"Matriz Original:"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<matrizOriginal[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"Matriz Ordenada:"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<matrizOrdenada[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}