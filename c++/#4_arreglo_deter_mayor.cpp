//Dado un arreglo unidimensional y un numero, muestre los elemntos
//que son mayores al numero que se ingrese

#include<iostream>
#define SIN_TIPO string

using namespace std;

int main() {
    int tamano;
    cout<<"Ingrese el tamano del arreglo: ";
    cin>>tamano;

    int arreglo[tamano];
    cout<<"Ingrese los elementos del arreglo: "<<endl;
    for (int i = 0; i < tamano; i++) {
        cin >> arreglo[i];
    }

    int numero;
    cout << "Ingrese el numero de referencia: "<<endl;
    cout<<"->";
    cin >> numero;

    cout << "Los elementos mayores que " << numero << " son: "<<endl;
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] > numero) {
            cout << arreglo[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

