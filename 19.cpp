

#include <iostream>
using namespace std;


int volume(int side)
{
    // CUBE
    return (side * side * side);
}
// CYLUNDER
float volume(int radius, int height)
{
    return (3.14 * radius * radius * height);
}
// SPHERE
int volume(float radius)
{
    return (4 * 3.14 * radius * radius * radius) / 3;
}

int main()
{
    int side;
    cout << "Enter side  = ";

    cin >> side;
    cout
        << "volume  of  cube is = " << volume(side) << endl;

    int radiu_s, height;
    cout << "Enter radius and height = " << endl;
    cin >> radiu_s >> height;
    cout << "Volume of the cylinder is = " << volume(radiu_s, height) << endl;

    float rad_ius;
    cout << "Enter radius = " << endl;
    cin >> rad_ius;
    cout << "Volume  of the sphere is  = " << volume(rad_ius);

    cout << "\n"
         << "THANK YOU " << "\n"
         << "programming";
    return 0;
}