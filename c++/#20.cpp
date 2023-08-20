/* Hacer una calculadora de areas de figuras geometricas. El programa debe presentar una lista de opciones
de las figuras para las que puede calcular areas: triangulo, cuadrado, rectangulo y circulo. En base a la figura 
elegida, el programa debe pedir los datos que requiere para el calculo y presentarle dicha areaal usuario */

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

void Cuadrado();

void Triangulo();

void Rectangulo();

void Circulo();

int main() {

	int Opcion;
	
	
	
	system("cls");
	
	cout << "AREAS DE FIGURAS\n\n";
	
	cout << "Seleccione:" << endl;
	
	cout << "1. Area de un cuadrado.\n";
	
	cout << "2. Area de un rectangulo.\n";
	
	cout << "3. Area de un triangulo.\n";
	
	cout << "4. Area de un circulo.\n";
	
	cout << "Opcion: ";
	
	cin >> Opcion;
	
	switch(Opcion) {
	
		case 1: Cuadrado(); break;
		
		case 2: Rectangulo(); break;
		
		case 3: Triangulo(); break;
		
		case 4: Circulo(); break;
		
		case 0: return 1; break;
		
		default:
		
		cout << "INVALIDO, REINTENTE";
		
		
		}
		
		cout << endl << endl;
		
		system("pause");
		
		}
		
		void Cuadrado() {
		
		float Lado;
		
		cout << "Introduzca el lado del cuadrado: ";
		
		cin >> Lado;
		
		cout << "Area: " << Lado * Lado;
		
		}
		
		void Rectangulo() {
		
		float Lado1, Lado2;
		
		cout << "Introduzca la altura: ";
		
		cin >> Lado1;
		
		cout << "\nIntroduzca el ancho: ";
		
		cin >> Lado2;
		
		cout << "Area: " << Lado1 * Lado2;
		
		}
		
		void Triangulo() {
		
		float b, h;
		
		cout << "Introduzca la altura: ";
		
		cin >> h;
		
		cout << "\nIntroduzca la base: ";
		
		cin >> b;
		
		cout << "Area: " << (b*h)/2;
		}
	
		void Circulo() {
		
		int r ;
		
		cout << "Introduzca el radio: ";
		
		cin >> r;
	
		
		cout << "Area: " << (r*r)*3.1416;
		}
		
		
		
		
		
		
		