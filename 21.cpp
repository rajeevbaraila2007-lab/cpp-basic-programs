//1
// #include <iostream>

// using namespace std;

// class student
// {
// public:
//     string name;
//     int rollno;
//     int Grno;
//     void showdetail(student s1)
//     { // here we used s1.name like that so we should have to s1 argument in the function,,,,

//         cout << "----DETAILS-----" << endl;
//         cout << s1.name << endl;
//         cout << s1.rollno << endl;
//         cout << s1.Grno << endl;
//     }
// };
// int main()
// {
//     student s1;
//     s1.name = "Rajeev Ranjan";
//     s1.rollno = 8930;
//     s1.Grno = 140452;
//     s1.showdetail(s1);
//     return 0;
// }

//2

// #include<iostream>

// using namespace std;

// class student{
//     public:
//     string name;
//     int rollno;
//     int Grno;
//     void showdetail(){
//         cout<<"----DETAILS-----"<<endl;
//         cout<<name<<endl;
//         cout<<rollno<<endl;
//         cout<<Grno<<endl;
        
        
//     }
// };
// int main(){
//     student s1;
//     s1.name = "Rajeev Ranjan";
//     s1.rollno = 8930;
//     s1.Grno = 140452;
//     s1.showdetail();
//     return 0;
// }



//3
#include<iostream>
#include<cstring>
using namespace std;

class student{
    public:
    string name;
    int rollno;
    int Grno;
    void showdetail(){
        cout<<"----DETAILS-----"<<endl;
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<Grno<<endl;
    }
    void getdetail(string n,int r,int p){
        name=n;
        rollno=r;
        Grno = p;
    
        
    }
};
int main(){
    student s1;
     s1.getdetail("Rajeev Ranjan",8930,140452);
    
    s1.showdetail();
    return 0;
}
