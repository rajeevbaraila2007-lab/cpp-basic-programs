#include<iostream>
using namespace std;

class media {
public:
    virtual void play() = 0;   // pure virtual function
};

class video : public media {
public:
    void play() {
        cout << "Play video." << endl;
    }
};

int main() {
    media* m;

    m = new video();
    m->play();

    // delete m;
    // m = nullptr;

    

    return 0;
}