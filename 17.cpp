#include<iostream>
using namespace std;
class number{
    int x,y;
   
    public:
    number(){
        x = 5;
        y = 6;
    }
    void display(){
        cout<<x<<" "<< y<<endl;
    }
    number operator+(number p){
        number q;
        p.x = x +q.x;
        p.y = y + q.y;
        return q;
    }
};
int main(){
number a ,b, c;
c  = a + b;
c.display();
return 0;

}