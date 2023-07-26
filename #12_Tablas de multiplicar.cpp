/* Programa que permite ingresar un numero entero del 1 al 12 y muestra 
la tabla de multiplicar de dicho numero*/

#include <iostream>

using namespace std;

int main(){
	
	int num;
	
	do{
	
	cout<<"Ingrese un numero del 1 al 12: "<<endl;
	cout<<"->";
	cin>>num;
	cout<<endl;
	
	if(num>12){
		cout<<"El numero que ingreso esta fuera del rango."<<endl;
	}
	cout<<endl;
	
	}while((num<1) || (num>12)); 
	
	
	for(int i=1; i<=12; i++){ 
		
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	
	return 0;
}