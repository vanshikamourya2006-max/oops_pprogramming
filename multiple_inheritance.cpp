#include<iostream>
using namespace std;
class parent1
{
    public:
    void hair()
    {
        cout<<"hair colour is reddd"<<endl;
    }
};
class parent2
{
    public:
    void eyes()
    {
        cout<<"eyes are brown"<<endl;
    }
};
class child : public parent1 ,public parent2
{
    public:
    void result()
    {
        cout<<"thee child looks like both the parents"<<endl;
    }
};
int main()
{
    child c;
    c.result();
    c.eyes();
    c.hair();
    return 0;
}
