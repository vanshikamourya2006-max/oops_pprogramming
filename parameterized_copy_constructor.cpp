#include <iostream>
using namespace std;
class myclass
{
    int age;
    string name;

public:
    myclass(int a, string n)
    {
        age = a;
        name = n;
    }

    myclass(const myclass &s)
    {
        age = s.age;
        name = s.name;
    }
    void display()
    {
        cout << "age is:" << age << ", name is:" << name << endl;
    }
};
int main()
{
    myclass a1(21, "sabrina carpenter"); // Calls default constructor
    myclass a2 = a1;
    myclass a3 = a1; // Calls copy constructor
    a1.display();
    a2.display();
    a3.display();

    return 0;
}