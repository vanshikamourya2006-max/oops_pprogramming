#include<iostream>
using namespace std;
class car
{
    public:
    string brand;
    string model;
    car()
{
    brand="unknown";
    model="unknown";
}
car(string b,string m)
{
    brand=b;
    model=m;
}
};
int main()
{
    car car1;
    car car3("ford", "mustang");
    car car2("bmw" ,"x5");
    cout<<"car1:"<<car1.brand<<" "<<car1.model<<" "<<endl;
    cout<<"car2:"<<car2.brand<<" "<<car2.model<<" "<<endl;
    cout<<"car3:"<<car3.brand<<" "<<car3.model<<" "<<endl;
    
}
