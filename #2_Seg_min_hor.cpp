//Ingrese una cantidad en segundos, luego muestre la cantidad de horas, minutos
// y segundos que existen en el valor ingresado

#include<iostream>
using namespace std;


int main() {
	float d;
	float h;
	float m;
	float s;
	cout << "Ingrese un valor en segundos: " << endl;
	cout<<"->";
	cin >> s;
	cout<<endl;
	
	m = s/60;
	h = s/3600;
	
	cout << s << " Segundos son: " << endl;
	cout << m << " minutos" << endl;
	cout << h << " horas" << endl;
	return 0;
}

