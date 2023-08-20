/* Algoritmo donde una persona recibe un prestamo de un banco y desea saber cuanto pagara de interes,si
el banco le cobra una tasa de 2% mensual. Ingresar el monto del prestamo y el numero de meses por teclado*/

#include<iostream>
using namespace std;

int main() {
    int meses;
    float monto, intereses, totalp;
    
    cout<<"CALCULAR EL INTERES A PAGAR.\n\n";
    
    cout<<"Ingrese el monto del prestamo: ";
    cin >> monto;
    
    cout<<"Ingrese el número de meses: ";
    cin>>meses;
    
    intereses=monto*(meses * 0.02);
    totalp=monto+intereses;
    
    cout<<"Interes: "<<intereses<<endl;
    cout<<"Pago Total: "<<totalp<<endl;
    
    return 0;
}