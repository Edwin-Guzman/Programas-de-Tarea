/* Dato un numero ingresado, mostrar si es par o impar, use 
para este ejercicio el operador matematico MOD*/

#include<iostream>
using namespace std;

int main(){
    int num;

    do{
        cout<<"Ingrese un numero entero: "<<endl;
        cin>>num;
    }while(num>0);

    if(num<0){
        cout<<"Se ingreso un numero negativo.";
    }
    else if(num==0){
        cout<<" El numero es 0.";
    }
    else if(num%2==0){
        cout<<num<<" Es un numero par.";
    }
    else{
        cout<<num<<" Es un numero impar.";
    }
    return 0;
}