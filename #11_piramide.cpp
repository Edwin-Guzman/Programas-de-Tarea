/* Realizar un algoritmo que muestre la siguiente serie numerica
123456789
12345678
1234567
123456
12345
1234
123
12
1*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Ingrese un número: "<<endl;
    cout<<"->";
    cin>>num;

    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}