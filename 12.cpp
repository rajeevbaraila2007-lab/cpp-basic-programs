// #include <iostream>
// using namespace std;

// int add(int a, int b)
// {
//     return (a + b);
// }
// int substract(int a, int b)
// {
//     return (a - b);
// }
// int multiply(int a, int b)
// {
//     return (a * b);
// }
// float divide(float a, float b)
// {
//     return (a / b);
// }
// int module(int a, int b)
// {
//     if (b == 0)
//     {
//         cout << "\n"
//              << "Modulo not valid !";
//         return 0;
//     }
//     else
//     {
//         return a % b;
//     }
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter the value of num1 and num2 = ";

//     cin >> num1 >> num2;
//     cout << "\n"
//          << "Sum of " << num1 << " and " << num2 << " is = " << add(num1, num2);
//     cout << "\n"
//          << "Substractio of " << num1 << " and " << num2 << " is = " << substract(num1, num2);
//     cout << "\n"
//          << "Multiply of " << num1 << " and " << num2 << " is = " << multiply(num1, num2);
//     cout << "\n";
//     if (num2 == 0)
//     {
//         cout << "Divide of " << num1 << " and " << num2 << " is = " << "Invalid !.";
//     }
//     else
//     {
//         cout << "Divide of " << num1 << " and " << num2 << " is = " << divide(num1, num2);
//     }

//     cout << "\n"
//          << "Module of " << num1 << " and " << num2 << " is = " << module(num1, num2);

//     return 0;
// }




#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int module(int a, int b) {
    return a % b;
}

int main() {
    int num1, num2;
    cout << "Enter the value of num1 and num2 = ";
    cin >> num1 >> num2;

    cout << "\nSum of " << num1 << " and " << num2 << " is = " << add(num1, num2);
    cout << "\nSubtraction of " << num1 << " and " << num2 << " is = " << subtract(num1, num2);
    cout << "\nMultiply of " << num1 << " and " << num2 << " is = " << multiply(num1, num2);

    if (num2 == 0) {
        cout << "\nDivide of " << num1 << " and " << num2 << " is = Invalid!";
        cout << "\nModulo not possible.";
    } else {
        cout << "\nDivide of " << num1 << " and " << num2 << " is = " << divide((float)num1, (float)num2);
        cout << "\nModule of " << num1 << " and " << num2 << " is = " << module(num1, num2);
    }

    return 0;
}
