#include<iostream>
using namespace std;
class myclass
{
    int x;
    float y;
    public:

    myclass()
    {
        x=0;
        y=2;
    }
  
        myclass(const myclass &other)
        {
            x=other.x;
            y=other.y;
        }
        void display()
        {
            cout<< "x:"<< x <<", y:"<< y <<endl;
        }
      };
      int main()
{
    myclass a1;           // Calls default constructor
    myclass a2 = a1;     // Calls copy constructor

    cout << "Object 1:\n ";
    a1.display();

    cout << "Object 2 (copy of a1):\n ";
     a2.display();

    return 0;
}