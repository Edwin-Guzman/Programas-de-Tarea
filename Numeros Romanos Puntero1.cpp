/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

string calcularnumromano(int *num) {
    string numromano = "";

    if (*num >= 1 && *num <= 3000) {
        int unidades = *num % 10;
        int decenas = (*num / 10) % 10;
        int centenas = (*num / 100) % 10;
        int millares = (*num / 1000) % 10;

        switch (millares) {
            case 1:
                numromano += "M";
                break;
            case 2:
                numromano += "MM";
                break;
            case 3:
                numromano += "MMM";
                break;
        }

        switch (centenas) {
            case 1:
                numromano += "C";
                break;
            case 2:
                numromano += "CC";
                break;
            case 3:
                numromano += "CCC";
                break;
            case 4:
                numromano += "CD";
                break;
            case 5:
                numromano += "D";
                break;
            case 6:
                numromano += "DC";
                break;
            case 7:
                numromano += "DCC";
                break;
            case 8:
                numromano += "DCCC";
                break;
            case 9:
                numromano += "CM";
                break;
        }

        switch (decenas) {
            case 1:
                numromano += "X";
                break;
            case 2:
                numromano += "XX";
                break;
            case 3:
                numromano += "XXX";
                break;
            case 4:
                numromano += "XL";
                break;
            case 5:
                numromano += "L";
                break;
            case 6:
                numromano += "LX";
                break;
            case 7:
                numromano += "LXX";
                break;
            case 8:
                numromano += "LXXX";
                break;
            case 9:
                numromano += "XC";
                break;
        }

        switch (unidades) {
            case 1:
                numromano += "I";
                break;
            case 2:
                numromano += "II";
                break;
            case 3:
                numromano += "III";
                break;
            case 4:
                numromano += "IV";
                break;
            case 5:
                numromano += "V";
                break;
            case 6:
                numromano += "VI";
                break;
            case 7:
                numromano += "VII";
                break;
            case 8:
                numromano += "VIII";
                break;
            case 9:
                numromano += "IX";
                break;
        }
    } else {
        numromano= "Numero no valido ";
    }
    return numromano;
}

int main() {
	
	system("color 02");
	system("title Numeros Romanos");
	
    int num;
    
    do{
    	cout<<"Ingrese un numero entre el 1 y el 3000 para convertir a numero romano: "<<endl;
	    cout<<"->";
	    cin>>num;

	    string numromano = calcularnumromano(&num);
	    if (numromano == "Numero no valido ") {
	        cout<< "El numero que ingreso no esta dentro del rango."<<endl;
	        cout <<"Ingrese un numero que este entre 1 a 3000."<<endl;
	    } else {
	        cout<<num<< " es igual en numeros romanos a: "<<numromano<<endl;
	    }
		cout<<endl;
	}while(num >= 1 && num <= 3000);
	
	_getch();
    return 0;
}