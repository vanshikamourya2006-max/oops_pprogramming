#include<iostream>
using namespace std;
class test
{
    public :
    int val;
    void show()
    {
        cout<<"\nasd"<<val;
    }
};
int main()
{
    test t1,t2;
    t1.val=10;
    t2.val=20;
    t1.show();
    t2.show();
    return 0;

}