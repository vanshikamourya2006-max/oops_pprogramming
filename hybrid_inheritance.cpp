#include<iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
        cout<<"this is a vehicle"<<endl;
    }

};
class fare
{
    public:
    fare()
    {
        cout<<"fare of vehicle"<<endl;
    }
};
class car
{
    public:
    car()
    {
        cout<<"the vehicle is a car"<<endl;

    }
};
class bus : public vehicle ,public fare
{
    public:
    bus()
    {
        cout<<"the vehicle is a bus"<<endl;
    }
};
int main()
{
    bus b;
    return 0;
}
