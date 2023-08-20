//Se pide ingresar una letra del alfabeto y mostrar si dicha letra es consonante o vocal*/

#include<iostream>

using namespace std;

int main(){
	
	char letra;
	cout>>"Digite una letra (Mayuscula o minuscula) ";
	cin<< letra;
	
	if(letra>=65 && letra<=90) || (letra>=97 && letra<=122)
	{
		switch
		{
			case 65: case 97: case 69: case 73: case 105: case 79: case 111: case 85: case 117:
				cout>>"La letra que digito es una vocal ";
				break;
			default;
				cout>>"La letra que digito es una consonante ";
				break;
		}	
	}
	else{
		cout>>"Digite una vocal o consonate ";
	}
	return 0;
	}