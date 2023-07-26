//Igrese dos numeros enteros y un operador(+,-,*,/);segun el operador ingresado
//mostrar la operacion que corresponde
  
#include<iostream>
using namespace std;
int main(){
	int num1, num2, operador;
	cout<<"Ingrese el primer numero : "<<endl;
	cout<<"->";
	cin>>num1;
	cout<<endl;
	cout<<"Ingrese el segundo numero: "<<endl;
	cout<<"->";
	cin>>num2;
	cout<<endl;
	cout<<"Ingrese Operador (1. + , 2. - , 3. x, 4. /) : ";
	cout<<"->";
	cout<<endl;
	cin>>operador;
	
	switch(operador){
	case 1:
		cout<<endl<<"SUMA : "<<(num1+num2)<<endl;
		break;
	case 2:		
		cout<<endl<<"RESTA : "<<(num1-num2)<<endl;
		break;
	case 3:		
		cout<<endl<<"MULTIPLICACION	: "<<(num1*num2)<<endl;
		break;
	case 4:		
		cout<<endl<<"DIVISION : "<<(num1/num2)<<endl;
		break;	
	default:
		cout<<endl<<"OPERADOR INCORRECTO"<<endl;				
	}	
	return 0;
}