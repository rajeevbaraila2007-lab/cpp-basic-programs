#include<iostream>
using namespace std;
class media{
    public:
    virtual void play(){
        cout<<"Play generic."<<endl;
    }
};
class video :  public media{
    public:
    void play(){
        cout<<"Play video.";
        
    }
};
int main(){
    media* m;
    m = new video();
    m->play();
    //   m = new media();
    //   m->play();
      delete m;
      m -> play();
      m = nullptr;
    return 0;
}