#include<iostream>
using namespace std;
class animal
{
    public:
    void eat()
    {
        cout<<"this animal eats food"<<endl;
    }
};
class mammal : public animal
{
    public:
    void walk()
    {
        cout<<"the mammal walks on land"<<endl;
    }
};
class dog: public mammal
{
    public:
    void bark()
    {
        cout<<"the dog barks"<<endl;
    }
};
int main()
{
    dog d;
    d.eat();
    d.walk();
    d.bark();
    return 0;
}
