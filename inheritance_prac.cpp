//hybrid inheritance 
#include<iostream>
using namespace std;
class animal
{
    public:
    void eat()
    {
        cout<<"animal is eating"<<endl;
    }
};
class bird: virtual public animal
{
    public:
    void wings()
    {
        cout<<"birds is flying"<<endl;
    }
};
class mammal : virtual public animal
{
    public:
    void navigation()
    {
        cout<<"mammal is navigating"<<endl;
    }
};
class bat : public mammal , public bird
{
    public:
    void colour()
    {
        cout<<"bat is black in colour"<<endl;
    }
};
int main()
{
    bat b;
    b.eat();
    b.wings();
    b.colour();
    b.navigation();
    return 0;
}