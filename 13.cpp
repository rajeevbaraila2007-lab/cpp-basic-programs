#include <iostream>
using namespace std;

int cube(int a)
{
    return (a * a * a);
}

int main()
{
    int num;
    cout << "Enter the value of num  = ";
    
    cin >> num;
    cout << "Cube of the " << num << " is = " << cube(num);

    return 0;
}