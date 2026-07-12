#include <iostream>
#include <cstring>
using namespace std;
class person
{
protected:
    string name;
    int age;

public:
    void getpersondetails()
    {
        cout << "Enter name:";
        getline(cin, name);
        cout << "Enter age:";
        cin >> age;
    }
};
class patient : public person
{
    int patientId;
    string deases;

public:
    void getpatientdetails()
    {
        getpersondetails();
        cout << "Enter patient Id:";
        cin >> patientId;
        cin.ignore();
        cout << "Enter deases:";
        getline(cin, deases);
    }

    void showdetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

        cout << "Pateinet ID: " << patientId << endl;
        cout << "DEASES: " << deases << endl;
    }
};
int main()
{
    patient p;
    // p.getpersondetails();
    p.getpatientdetails();
    p.showdetails();
    return 0;
}
