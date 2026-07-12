#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the value of year = ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0)
    {

        cout << "Entred year is  = " << "Leap year.";
    }
    else
    {
        cout << "Entred year is  = " << " Not Leap year.";
    }
}