/* Realizar la operacion para llenar de forma aleatoria un vector de numeros 
enteros y conatr cuantos numeros que estan almacenados en el vector son numeros primos*/

#include <iostream>
#include <vector>
#include <cstdlib>   
#include <ctime>     
using namespace std;

bool esPrimo(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
	
    srand(time(NULL));  

    int tamano;
    cout<<"Ingrese el tamano del vector: ";
    cin>>tamano;
    cout<<endl;

    vector<int> numeros(tamano);

    for(int i = 0; i < tamano; i++) {
        numeros[i] = rand() % 100; 
    }

    int cantidadPrimos= 0;
    cout<<"Los numeros del vector son: ";
    for(int num : numeros) {
        cout<<num<< " ";
        if(esPrimo(num)) {
            cantidadPrimos++;
        }
    }
    cout<<endl;

    cout<<"Cantidad de numeros primos en el vector: " << cantidadPrimos << endl;
    
    return 0;
}
