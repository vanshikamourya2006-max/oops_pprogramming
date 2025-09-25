#include<iostream>
using namespace std;
class v
{
    public:
    int plusfunction( int x, int y)
    {
        return x+y;
    }
    double plusfunction( double a, double b)
    {
        return a+b;
    }
};
int main()
{
    v v1;
    int mynum1 = v1.plusfunction(2,5);
    double mynum2 = v1.plusfunction(8.2,4.7);
    cout<<"num1="<<mynum1<<endl;
    cout<<"num2="<<mynum2<<endl;
    return 0;
}