#include <iostream>
using namespace std;
int main (){
    string entrada; 
    int A, B;
    cout << "entrada - ";cin >> entrada;
    A = (((entrada[0]-48)*10) + (entrada[1]-48));
    B = (((entrada[entrada.length()-2]-48)*10) + (entrada[entrada.length()-1]-48));
    if(A * 100 + B == (A + B)*(A + B)){
        cout << 1;
    }
    else{
        cout << 0;
    }
}