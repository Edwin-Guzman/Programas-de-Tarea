/* Crear una matriz de 4x5 y cargarlos con los priero numeros naturales; al ingresar un numero
cualquiera debera buscar dicho numero en la matriz e indicar en que fila y columna se encuentra
el numero dado*/

#include<iostream>

using namespace std;

int main() {
	
    int c, f, num, matrix[4][5];
    num=1;

    for(f=0; f<=3; f++){
        for(c=0; c<=4; c++) {
            matrix[f][c] = num;
            num =num+1;
        }
    }
    
    num=0; 

    while (num<1 || num>20) {
        cout<<"Ingrese un numero del 1 al 20: "<<endl;
        cout<<"->";
        cin>>num;
        cout<<""<<endl;
        
        if(num<1 || num>20){
            cout<<"Numero no valido."<<endl;
        }
        cout<<endl;
    }

    for(f=0; f<=3; f++){
        cout<<matrix[f][0]<<" "<<matrix[f][1]<<" "<<matrix[f][2]<<" "<<matrix[f][3]<<" "<<matrix[f][4]<<endl;
    }
    cout<<""<<endl;

    for(f=0; f<=3; f++) {
        for(c=0; c<=4; c++) {
            if(matrix[f][c] == num) {
                cout<<"Posicion en la MATRIZ ["<<f+1<<","<<c+1<<"]"<<endl;
            }
        }
    }

    return 0;
}