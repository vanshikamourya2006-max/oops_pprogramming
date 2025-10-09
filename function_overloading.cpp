#include<iostream>
using namespace std;

int volume(int l,int b, int h)
{
    return l*b*h;
}
float volume(int r)
{
    return (4/3)*3.14*r*r*r;
}
int main()
{
    cout<<"the volume of the sphere is "<<volume(4)<<endl;
    cout<<"the volume of the cuboid is "<<volume(1,2,3)<<endl;
    return 0;
}