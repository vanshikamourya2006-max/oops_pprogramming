#include<iostream>
using namespace std;
class bankaccount
{
    public:
    string name;
    int accno,balance;
    bankaccount(string n,int a,int b)
    {
        name=n;
        accno=a;
        balance=b;
    }
    void deposit(int d)
    {
        balance=balance+d;
    }
    void withdrawal(int w)
    {
        if(balance<w)
        {
            cout<<"insufficent balance"<<endl;
            return;
        }
        balance=balance-w;
        
    }
    void showbalance()
    {
        cout<<"account holder name:"<<name<<endl;
        cout<<"account no:"<<accno<<endl;
        cout<<"account balance:"<<balance<<endl;
    }

};
int main()
{
    int ch,depositamt,withdrawlamt;
    bankaccount b1("taylor swift" ,986,0);
    cout<<"enter your choice 1.deposit 2.withdrawl 3.balance"<<endl;
    cin>>ch;
    if(ch==1)
    {
        cout<<"enter amount to deposit:"<<endl;
        cin>>depositamt;
        b1.deposit(depositamt);
    }
    else if(ch==2)
    {   
        cout<<"enter amount to withdrawl"<<endl;
        cin>>withdrawlamt;
        b1.withdrawal(withdrawlamt);
    }
    
    b1.showbalance();


}