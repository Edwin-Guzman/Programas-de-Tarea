/* Progrma que permite convertir entre celsius y fahrenheit*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	int n;
	
	cout<<"Escoja una conversion"<<endl;
	cout<<"1. C a F"<<endl;
	cout<<"2. F a C"<<endl;
	cin>> n;
	system("cls");
	
	if(n==1)
	{
		float c; /*Conversion de Celsius a Farhenheit*/
		cout<<"Ingrese una cantidad en grados Celsius: "<<endl;
		cin>>c;
		double f=(c*9/5)+(32);
		cout<<"\n"<< c << " grados Celsius equivale a "<<f<<" grados Fahrenheit."<<endl;
	}
	else{
		float f; /*Conversion de Farhenheit a Celsius*/
		cout<<"Ingrese una cantidad en grados Fahrenheit: "<<endl;
		cin>> f;
		double c=(f-32)*5/9;
		system("cls");
		
		cout<<"\n"<< f << " grados Fahrenheit equivale a "<<c<<" grados Celsius."<<endl;  
	}
	return 0;
}