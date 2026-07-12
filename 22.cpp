#include <iostream>
#include <cstring>
using namespace std;
class student
{
public:
    string name;
    int roll_no;
    int gr;
    

    void showdetails()
    {
        cout << "Name:~" << name << endl;
        cout << "Roll_no:~" << roll_no << endl;
        cout << "Gr no:~" << gr << endl;
    }
    void getdata(string n, int r, int g);
};
void student::getdata(string n, int r, int g)
{
    name = n;
    roll_no = r;
    gr = g;
}
int main()
{
    student s1;
    s1.getdata("Rajeev Ranjan", 8930, 140452);
    s1.showdetails();
    return 0;
}