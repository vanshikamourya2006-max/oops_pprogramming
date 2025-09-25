#include<iostream>
using namespace std;
class cars
{
   public:
    void startengine()
    {
        cout<<"engine started"<<endl;
    }
};
class  driver
{
    public:
    void drive(cars &car)
    {
        car.startengine();
        cout<<"car is being drived"<<endl;
    }
};
int main()
{
    cars bmw;
    driver raju;
    raju.drive(bmw);
}


