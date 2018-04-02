#include <iostream>
using namespace std;

int main()

{
    int fact;
    cout<<" Ingrese el numero  :"; cin>>fact;
    int temp = fact - 1 ;
    int r = fact;
    while (temp >=1){
        r = r*temp;
        temp --;
    }
    cout << "el factorial es  "<<  r;
}
