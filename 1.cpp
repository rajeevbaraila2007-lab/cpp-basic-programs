#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << "  is the Even number.";
    }
    else
    {
        cout << n << " is the Odd number.";
    }
}