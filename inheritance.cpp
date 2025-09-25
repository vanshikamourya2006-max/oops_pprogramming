#include<iostream>
using namespace std;
class vehicle
{
    public:
    int n;
    void print()
    {
        cout<<n<<endl;
    }
};
class child:public parent;
