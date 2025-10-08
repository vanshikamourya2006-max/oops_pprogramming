#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno,marks;
    student(string s,int r,int m)
    {
        name=s;
        rollno=r;
        marks=m;
    }
    void display()
    {
        cout<<" name is :"<<name<<endl;
        cout<<" roll no is :"<<rollno<<endl;
        cout<<" marks sre :"<<marks<<endl;
    }
};
int main()
{
    student s1("Damon Salvatore",12,87);
    s1.display();
    return 0;
}