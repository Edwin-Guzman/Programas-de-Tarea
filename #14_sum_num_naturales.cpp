/* Programa que calcula la suma de los N primeros numeros naturales, donde N es el numero 
limite ingresado por teclado */

#include<iostream>

using namespace std;

int main(){
	
	int cont, num, sum;
	
	cont=0;
	sum=0;
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	while(cont <=num){
		sum= sum+cont;
		cont=cont+1;
	}
	cout<<"La suma es : "<< sum << endl;
	
	return 0;
}