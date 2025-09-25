#include<iostream>
using namespace std;
class v
{
    public:
    int plusfunction( int x, int y)
    {
        return x+y;
    }
    int plusfunction( int x, int y, int z)
    {
        return x+y+z;
    }
};
int main()
{
    v v1;
    int mynum1 = v1.plusfunction(2,5);
   int mynum2 = v1.plusfunction(8,4,3);
    cout<<"num1="<<mynum1<<endl;
    cout<<"num2="<<mynum2<<endl;

}