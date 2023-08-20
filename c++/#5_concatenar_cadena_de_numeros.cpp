// Lea 5 numeros mientras no sea 0 o negativo, luego concatnelos en una sola cadena de caracteres

#include<iostream>
#include<sstream>
using namespace std;


string convertiratexto(float f);


int main() {
	string cadena;
	int num;
	int sw;
	cadena = "";
	for (sw=1;sw<=5;sw++) {
		cout << "Ingrese un numero: " << endl;
		cin >> num;
		if (num>0) {
			cadena = (cadena+convertiratexto(num));
		}
	}
	cout << cadena << endl;
	return 0;
}


string convertiratexto(float f) {
	stringstream ss;
	ss << f;
	return ss.str();
}

