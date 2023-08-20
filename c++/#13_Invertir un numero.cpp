/* Ingrese un numero cualquierade varias cifras y devolver el mismo numero 
con sus cifras invertidas*/

#include <iostream>

using namespace std;

int invertir(int); /* Declarar la funcion*/

int main(){
	
	int n;
	
	cout<<"Ingrese un numero de varias cifras. Al finalinar presione enter : "<<endl;
	cout<<"->";
	cin>>n;
	
	invertir(n);

	cout<<invertir(n);
	
	return 0;
}


int invertir(int numero){  /*Definir la funcion*/ 
	
	int resultado=0;
	
	while (numero>0)
	{
		resultado = resultado*10;
		resultado = resultado+numero%10;
		numero=numero/10;
	}



	return resultado;
}