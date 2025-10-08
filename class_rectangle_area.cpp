#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length , breadth;
    rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    
    void area()
    {
      
        cout<<"area of reactangle is:"<<length*breadth<<endl;
    }
    void perimeter()
    {
       
        cout<<"perimeter of a rectangle is:"<<2*(length+breadth)<<endl;
    }

    
};
int main()
{
    int l,b;
    cout<<"enter length:"<<endl;
    cin>>l;
    cout<<"enter breadth:"<<endl;
    cin>>b;

    rectangle r(l,b);
    r.area();
    r.perimeter();
}
