#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter a number: ";
    cin>> n;

   

    (n % 2 == 0) ? cout << n << " is Even\n" :
                   cout << n << " is Odd\n";

    return 0;
}