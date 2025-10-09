#include<iostream>
using namespace std;
class suresh;
class amit
{
    int amt;
    public:
    void set_amt(int a)
    {
        amt=a;
    }
    friend void add(amit ,suresh);
};
class suresh
{
    int amt;
    public:
    void set_amt(int a)
    {
        amt=a;
    }
     friend void add(amit ,suresh);

};
void add(amit obj1,suresh obj2)
{
    cout<<"sum of two objects from definition of class amit and suresh is"<<obj1.amt +obj2.amt<<endl;
}
int main()
{
    suresh s;
    amit a;
    s.set_amt(11);
    a.set_amt(53);
    add(a,s);
    return 0;

}