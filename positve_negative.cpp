#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    (n > 0) ? cout<<" Positive\n"<< n :
    (n < 0) ? cout<< "Negative\n"<<n :
              cout << "Number is Zero\n";
            

    

    return 0;
}
