/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n, a=0, b=1, c;
    
    cout<<"Ingrese el número de términos a generar: "<<endl;
    cout<<"->";
    cin>>n;
    
    cout<<"Serie de Fibonacci:" << endl;
    
    cout<<a<<" ";
    
    for(int i=1; i<n;i++){
        cout<<b<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}