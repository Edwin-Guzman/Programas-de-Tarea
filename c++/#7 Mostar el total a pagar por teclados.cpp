/* En una tienda donde se vende teclados, si se compran mas de 8 el costo por cada uno 
es de 85 Lempiras entre 4 y 8 es de 90 lempiras cada uno. escriba un algoritmo para
 saber cuanto pagara un cliente segun el numero de teclados que compra.
Mostrar el numero de teclados a comprar y el total a pagar*/

#include <iostream>
using namespace std;

int main() {
    int numTeclados;
    cout<<"Ingrese el numero de teclados a comprar: "<<endl;
    cout<<"->";
    cin>>numTeclados;

    int costoUnitario;

    if(numTeclados > 8) {
        costoUnitario = 85;
    } else if (numTeclados >= 4 && numTeclados <= 8) {
        costoUnitario = 90;
    } else {
        cout<<"Cantidad invalida de teclados.";
        return 0;
    }

    int totalPagar = numTeclados * costoUnitario;

    cout<<"Numero de teclados a comprar: " << numTeclados << endl;
    cout<<"Total a pagar: " << totalPagar << " Lempiras" << endl;

    return 0;
}