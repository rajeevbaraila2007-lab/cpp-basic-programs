#include <iostream>
using namespace std;
class prime
{
public:
    void input()
    {

        int n;
        cout << "Enter the value n = ";
        cin >> n;
        int bose = false;
        for (int i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
            {

                bose = true; // composite number.
                break;
            }
        }
        if (n == 1)
        {
            cout << "Neither prime nor composite.";
        }
        else if (bose == true)

            cout << "Composite number.";

        else

            cout << "prime number.";
    }
};

int main()
{
    prime p;
    p.input();

    return 0;
}
