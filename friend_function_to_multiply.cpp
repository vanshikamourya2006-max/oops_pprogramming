#include<iostream>
using namespace std;
class B;

class A
{
   int n;
   public:
   void input(int x)
   {
    n=x;
   }
   friend void multiply(A,B);
};
class B
{
    int n;
    public:
    void input(int x)
    {
        n=x;
    }
    friend void multiply(A,B);
};
void multiply(A obj1, B obj2)
{
    cout<<"The product of class A and B : "<<obj1.n *obj2.n<<endl;
}
int main()
{
    A a;
    B b;
    a.input(10);
    b.input(20);
    multiply(a,b);
    
}