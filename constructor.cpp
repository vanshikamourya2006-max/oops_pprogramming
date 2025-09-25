#include<iostream>
using namespace std;
class myclass //the class
{
    public:   //access specifier
    myclass()
    {
       cout<<"hello world";  //constructor
    }
};
int main()
{
    myclass myobj; //create an object of myclass(this will call by the constructor)
    return 0;
}