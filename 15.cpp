#include <iostream>
using namespace std;
int temperature(int C)
{
    return (C * 9 / 5) + 32;
}
float converttocelsius(float f)
{
    return (f - 32) * 5 / 9;
}

int main()
{
    int C, f;
    cout << "Enter the value of C = ";
    cin >> C;
    cout << "Temperature in Farenheit = " << temperature(C);
    cout << "\n";
    cout << "Enter the value of f = ";
    cin >> f;
    cout << "Temperature in celsiuc = " << converttocelsius(f);
    return 0;
}