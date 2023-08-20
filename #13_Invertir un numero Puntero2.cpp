/*Invertir un numero*/

#include <iostream>

using namespace std;



int invertir(int *n){ 
	
	int resultado=0;
	
	while (*n>0)
	{
		resultado = resultado*10;
		resultado = resultado+*n%10;
		*n=*n/10;
	}
	return resultado;
}

int invertir(int);

int main(){
	
	int n;
	
	cout<<"Ingrese un numero entero: "<<endl;
	cout<<"->";
	cin>>n;
	cout<<endl;

	cout<<"El numero invertido es :"<< invertir(&n);
	
	return 0;
}
