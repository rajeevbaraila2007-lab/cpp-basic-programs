

#include <iostream>
using namespace std;
int main()
{
    int a,ld;
    int r = 0;
    cout << "Enter the value of a = ";
    cin >> a;
int temp =a;
    while(a>0){ 
    ld = a % 10;
   
    r = r * 10;
    r = r + ld;
    a = a / 10;
    }
    if (r == temp)
    {
        cout << "Palimdrome number.";
    }
    else
    {
        cout << "Not palimdrome number.";
    }
}
