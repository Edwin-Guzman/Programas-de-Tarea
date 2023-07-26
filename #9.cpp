/* Programa que permite ingresar 10 numeros y mientras se valla ingresando 
estos sean ordenados dentro de un vetor de 1 elementos */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numeros(10);

    cout<<"Ingrese 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cout<<"-> ";
        cin>>numeros[i];
    }

    sort(numeros.begin(), numeros.end()); 

    cout<<"Los numeros ingresados en orden ascendente son:" << endl;
    for (int num : numeros) {
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}