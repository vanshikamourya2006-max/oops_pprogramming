#include<iostream>
using namespace std;
class B;  //forward decelaration

class A
{
    friend class B;
    int a=20;
    public:
    void show()
    {
        cout<<"this is the class A"<<endl;
    }

};

class B
{
   friend class A;
   public:
   void show2()
   {
    cout<<"this is the class B"<<endl;
   }
   
   void accessoneprivate(A &obj)   //obj is used to access the int a=20 from class A
   {
    cout<<"accessing data of base class"<<obj.a<<endl;
   }

};
int main ()
{
    A a;
    B b;
    b.accessoneprivate(a);
}