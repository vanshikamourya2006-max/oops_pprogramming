#include<iostream>
using namespace std;
class scooty
{
    public:
    
    string brand;
    string model;
    int year;
    scooty(string x , string y , int z)
    {
        brand =x;
        model =y;
        year =z;
    }
};
int main()
{
     scooty scootyobj1("ather","rizta",2025);
    cout<< scootyobj1.brand<<" \n" <<" " << scootyobj1.model<<" \n" <<" " << scootyobj1.year<<" \n";
    return 0;
}