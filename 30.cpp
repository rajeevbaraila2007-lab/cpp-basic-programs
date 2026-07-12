#include <iostream>
#include <cstring>
using namespace std;
class boy
{
private:
    int roll_num;

protected:
    string name;

public:
    void setvalue(int r)
    {
        roll_num = r;
    }
    int getvalue()
    {
        return roll_num;
    }

    void getdata()
    {
        cout << "Enter your name :";
        getline(cin, name);
        cout << "Enter your roll number :";
        cin >> roll_num;
        cin.ignore();
    }
};
class student : public boy
{
    string branch;
    int semester;

public:
    void getstudentinfo()
    {
        getdata();
        cout << "Enter your Branch :";
        getline(cin, branch);

        cout << "Enter your semester :";
        cin >> semester;
        cin.ignore();
    }
    void showyourdata()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << getvalue() << endl;
        cout << "your branch: " << branch << endl;
        cout << "current semester: " << semester << endl;
    }
};
int main()
{
    student s;
    s.getstudentinfo();
    s.showyourdata();
    return 0;
}
