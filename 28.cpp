
#include <iostream>
using namespace std;
class alpha
{
public:
    alpha()
    { // constructor.
        cout << "Constructor created." << endl;
        ;
    }
    ~alpha()
    { // desctructor.
        cout << "Constructor destroyed.";
    }
};

int main()
{
    alpha A1;
    return 0;
}
