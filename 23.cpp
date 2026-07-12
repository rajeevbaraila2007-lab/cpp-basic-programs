#include <iostream>

using namespace std;
class calculate
{
    int a, b;

public:
    void input()
    {
        cout << "Enter value of a = ";

        cin >> a;
        cout << "Enter value of a = ";
        cin >> b;
    }

    int sum(int a, int b)
    {
        return a + b;
    }
    void output()
    {
        cout << "Sum of the two numer is = " << a + b;
    }
};

int main()
{
    calculate c1;
    c1.input();
    c1.output();
    return 0;
}