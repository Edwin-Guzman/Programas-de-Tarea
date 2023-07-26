/* Se requiere saber la edad de una persona culquiera a partir de su fecha de nacimiento con todos sus datos;
dia, mes y año de nacimiento. Lo anterior a partir de la fecha actual; dia. mes y año actual. Todos los datos
de ambas fechas, debe proporcionarlos el usuario a traves del teclado */

#include <iostream>
using namespace std;

int main(void) {
	
    int dn, mn, an, da, ma, aa, edad;
    system("cls");
    
    cout<<"\nFecha de nacimiento:\n";
    cout<<"\nDia: ";
    cin>>dn;
    cout<<"\nMes: ";
    cin>>mn;
    cout<<"\nAnio: ";
    cin>>an;
    cout<<"Fecha de nacimiento: ";
    cout<<((dn < 10) ? "0" : "")<<dn<<"/";
    cout<<((mn < 10) ? "0" : "")<<mn<< "/";
    cout<<an<<endl;

    cout<<"\nFecha actual:\n";
    cout<<"\nDia: ";
    cin>>da;
    cout<<"\nMes: ";
    cin>>ma;
    cout<<"\nAnio: ";
    cin>>aa;
    cout<<"Fecha actual: ";
    cout<<((da < 10) ? "0" : "")<<da<<"/";
    cout<<((ma < 10) ? "0" : "")<<ma<<"/";
    cout<<aa<<endl;
                                      
    edad =aa-an;

    if (mn>ma)
        edad--;
    else if(mn == ma){
        if (dn>da)
            edad--;
        else if (dn==da){
            cout<<"\n¡Feliz cumpleanos!"<<endl;
            cout<<"Fecha actual: ";
            cout<<((da < 10) ? "0" : "")<<da<<"/";
            cout<<((ma < 10) ? "0" : "")<<ma<<"/";
            cout<<aa<<endl;
        }
    }

    cout<<"\nEdad: "<<edad<<endl;
    
    system("pause");

    return 0;
}