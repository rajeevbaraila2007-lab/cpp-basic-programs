#include <iostream>
#include <cstring>
using namespace std;
class student
{
public:
    int room;
    int gr;
    int er;
    string name;
    string branch;

    void showdetails()
    {
        cout<<"______First student details_____"<<endl;
        cout << "Name :-" << name << endl;
        cout << "Room number:- " << room << endl;
        cout << "Gr:- " << gr << endl;
        cout << "er:- " << er << endl;
        cout << "branch:- " << branch << endl;
        // cout<<"______Second student details_____"<<endl;
    }
    // void getimformation(string n, int r, int g, int e, string p) //setter function
    // {

    //     name = n;
    //     room = r;
    //     gr = g;
    //     er = e;
    //     branch = p;
    // }
    // void showimformation() //getter function.
    // {
    //     cout << "Name :-" << name << endl;
    //     cout << "Room number:- " << room << endl;
    //     cout << "Gr:- " << gr << endl;
    //     cout << "er:- " << er << endl;
    //     cout << "branch:- " << branch << endl;
        
    // }
   
};
int main()
{
    student s1, s2;
    // strcpy(s1.name, " Rajeev Ranjan");
    s1.name = "rajeev ranjan";
    s1.room = 1213;
    s1.gr = 140452;
    s1.er = 8930;

    s1.branch = "B-tech, CSE AI/ML";

    s1.showdetails();
    // s2.getimformation("shyam", 1013, 11111,650, "Mechinical");
    // s2.showimformation();

    return 0;
}
