#include <iostream>
using namespace std;

int Arearectangle(int length, int breadth)
{
    return (length * breadth);
}
float Areacircle(int radius){
    return (3.14*radius*radius);
}
int Areatriangle(int base,int height){
    return ((base*height)/2);
}

int main()
{
    int length,breadth;
    cout << "Enter length and breadth  = ";
    ;
    cin >> length >> breadth;
    cout << "\n"
         << "Area  of  Rectangle length = " << length << " and breadth = " << breadth << " is = " << Arearectangle(length, breadth);
         cout<<"\n";
         int radius;
         cout<<"Enter radius of the circle = "<<"\n";
         cin>>radius;
         cout<<"Area of the circle is = "<<Areacircle(radius);
         cout<<"\n";
         int base,height;
         cout<<"Enter the base and height  of the Triangle = "<<"\n";
         cin>>base>>height;
         cout<<"Area of the Triangle is  = "<<"\n"<<Areatriangle(base,height);
    
         cout<<"\n"<<"THANK YOU "<<"\n"<<"programming";
    return 0;
}