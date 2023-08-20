/*Programa que permite ingresar 10 valores seguido 
muestra la cantidad de positivos, negativos o nulos*/

#include<iostream>
using namespace std;


int main() {
	
	int cant[10];
	
	float i;
	int neg;
	int nul;
	int pos;
	int n;
	pos = 0;
	neg = 0;
	nul = 0;
	
	for (i=1;i<=10;i++) {
		cout << "Ingrese el valor numero " << i << endl;
		cout<<"->";
		cin >> n;
		
		if ((n>=1)) {
			pos = pos+1;
		} else {
			if ((n<=-1)) {
				neg = neg+1;
			} else {
				nul = nul+1;
			}
		}
	}
	cout<<endl;
	
	cout << "Ingreso " << pos << " numeros positivos" << endl;
	cout << "Ingreso " << neg << " numeros negativos" << endl;
	cout << "Ingreso " << nul << " numeros nulos" << endl;
	
	return 0;
}

