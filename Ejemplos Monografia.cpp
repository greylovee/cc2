#include <iostream>
using namespace std;
class Vehicle
{
public:
    virtual void useVehicle() = 0;
};
class FordFigo : public Vehicle
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
