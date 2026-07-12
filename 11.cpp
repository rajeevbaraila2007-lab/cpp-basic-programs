// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int r = 0;
//     cout << "Enter the value of n.";
//     cin >> n;
//     int ld;
//     while (n > 0)
//     {
//         ld = n % 10;
//         r = r * 10;
//         r = r + ld;
//         n = n / 10;
//     }
//     cout << "Reverse number = " << r;
// }



/// SUM OF REVERSE NUMBER //
#include <iostream>
using namespace std;
int main()
{
    int n;
    int r = 0;
    cout << "Enter the value of n.";
    cin >> n;
    int ld;
    int sum =0;
    while (n > 0)
    {
        ld = n % 10;
        r = r * 10;
        r = r + ld;
        n = n / 10;
        sum = sum + ld;
    }
    cout << "Reverse number = " << r;
    cout<<"\n"<<"Sum of the reverse numer is  = "<<sum;
}