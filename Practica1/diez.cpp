
// serie fibonacci

#include <iostream>
using namespace std;
int main()
{
    int x= 0,y=1,z= 0,num;
    cout <<" ingrese numero de elementos  "; cin >> num;
    cout <<"1,  ";
    for(int i= 1; i <num; i++){
        z= x+y;
        cout<<z<<" ,";
        x=y;
        y=z;
    }

}
