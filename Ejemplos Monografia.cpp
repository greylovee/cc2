#include <iostream>
using namespace std;
class Vehicle
{
public:
    virtual void useVehicle() = 0;
};
class FordFigo : public Vehicle // uso de herencia y polimorfismo
{
public:
    void useVehicle()
    {
        cout << "Manejando en FordFigo" << endl;
    }
};
class TataNano : public Vehicle
{
public:
    void useVehicle()
    {
        cout << "Manejando en TataNano" <<endl;
    }
};
class BlackPulsar : public Vehicle
{
public:
    void useVehicle()
    {
        cout << "Paseando en BlackPulsar" << endl;
    }
};
class HondaActiva : public Vehicle
{
public:
    void useVehicle()
    {
        cout << "Paseando en HondaActiva" << endl;
    }
};



class persona
{
public:
    Vehicle *myVehicle;
    virtual void display() = 0;
    void setVehicle(Vehicle *v){myVehicle = v;}
    void driveVehicle(){myVehicle->useVehicle();}
};
class soltero : public persona
{
public:
    virtual void display()
    {
        cout << "yo soy soltero" << endl;
    }
};


int main()
{
    persona *sol = new soltero();
    sol->display();
    sol->setVehicle(new FordFigo());
    sol->driveVehicle();



    return 0;
}
//Arreglo Dinámico
class arreglo
{
    int size;
    int *data;
    public:
        arreglo(int size, int arr[]){
             this -> size = size;
            this -> data = new int [size];
            for (int i=0; i<size ; i++){
            data [i]= arr [i];
            }
        }
        void insertarAtras(int elem){
            int *nuevo = new int [size++];
            size++;
            for (int i=0; i< size-1; i++){
                nuevo[i]= data[i];
            }
            nuevo[size-1]=elem;
            delete[] data;
            data=nuevo;
        }
};
int main () 
{
    int arr[]= {4,2,3,6,8};
    arreglo a(5,arr);
    a.insertasAtras(7);
}

