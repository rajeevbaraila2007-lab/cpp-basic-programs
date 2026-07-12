// #include <iostream>
// using namespace std;
// class volume
// {
// private:
//     int a;

// public:
//        volume(int r) // parametrised constructor.
//     {
//         a = r;
//     }
//     void show()
//     {
//         cout << "Volume of the given value is = " << a * a * a;
//     }
// };
// int main()
// {
//     volume v1(2);

//     v1.show();

//     return 0;
// }


//default constructor.
#include <iostream>
using namespace std;
class volume
{
private:
    int a;

public:
 
 volume() //default constructor.
    {
       a=0;
    }
    int r;
     void input(){
         cout<<"Enter digit";
         cin>>r;
         a=r; //assign valur to a.
     }
    
    void show(){
        cout<<"Volume of the given value is = "<<a*a*a;
    }
};
int main()
{
   volume v1;
  
   v1.input();
  v1.show();

    return 0;
}
