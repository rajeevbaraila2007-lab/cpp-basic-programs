// #include <iostream>
// using namespace std;

// int Area(float length, float breadth)
// {
//     return (length * breadth);
// }
// float Area(int radius)
// {
//     return (3.14 * radius * radius);
// }
// float Area(int base, int height)
// {
//     return ((base * height) / 2);
// }

// int main()
// {
//     float length, breadth;
//     cout << "Enter length and breadth  = ";
//     ;
//     cin >> length >> breadth;
//     cout << "\n"
//          << "Area  of  Rectangle is = " << Area(length, breadth);
//     cout << "\n";
//     int radius;
//     cout << "Enter radius of the circle = " << "\n";
//     cin >> radius;
//     cout << "Area of the circle is = " << Area(radius);
//     cout << "\n";
//     int base, height;
//     cout << "Enter the base and height  of the Triangle = " << "\n";
//     cin >> base >> height;
//     cout << "Area of the Triangle is  = " << "\n"
//          << Area(base, height);

//     cout << "\n"
//          << "THANK YOU " << "\n"
//          << "programming";
//     return 0;
// }




//short
#include <iostream>
using namespace std;

float Area(float a, float b)   // Rectangle
{
    return (a * b);
}

float Area(int a)   // Circle
{
    return (3.14 * a * a);
}

float Area(int a, int b)   // Triangle
{
    return ((a * b) / 2.0);
}

int main()
{
    float a, b;
    cout << "Enter length and breadth = ";
    cin >> a >> b;
    cout << "\nArea of Rectangle is = " << Area(a, b) << endl;

    int c;
    cout << "Enter radius of the circle = ";
    cin >> c;
    cout << "Area of the circle is = " << Area(c) << endl;

    int d, e;
    cout << "Enter base and height of the triangle = ";
    cin >> d >> e;
    cout << "Area of the triangle is = " << Area(d, e) << endl;

    cout << "\nTHANK YOU\nProgramming";
    return 0;
}