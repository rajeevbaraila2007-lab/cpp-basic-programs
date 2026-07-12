#include<iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    void getdata() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void showdata() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Friend function declaration
    friend complex add(complex c1, complex c2);
};

// Friend function definition
complex add(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main()
{
    complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.getdata();

    cout << "Enter second complex number:\n";
    c2.getdata();

    c3 = add(c1, c2);   // calling friend function

    cout << "Sum of complex numbers: ";
    c3.showdata();

    return 0;
}