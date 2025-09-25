#include<iostream>
using namespace std;
class teacher
{
    public:
    int x;
    private :
    int y;
};
int main()
{
    teacher sub;
    sub.x=4; //allowed  (public)
    sub.y=3; //not allowed (private)
    return 0;
}