#include <iostream >
using namespace std;

int factorial (int n){
    if(n <= 1)
        return 1;
    else
        return ( n*factorial(n-1));

    }
int main(){
    int numero;
    cout << " Escriba el numero  :"; cin >> numero;
    cout<<"El factorial de :" << factorial(numero);
}
