#include<iostream>
using namespace std;
class myfriend
{
    public:
    virtual void myshoes()
    {
        cout<<"these are my friends shoes"<<endl;
    }

};
class me: public myfriend
{
    public:
    void myshoes()override
    {
        cout<<"these are my shoes now"<<endl;
    }
};
int main()
{
    me m;
    m.myshoes();
}