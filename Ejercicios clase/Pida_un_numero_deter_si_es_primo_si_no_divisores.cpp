/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool esPrimo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if (esPrimo(num)) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo. Divisores:";
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                cout << " " << i;
            }
        }
    }

    return 0;
}
