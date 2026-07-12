#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int temp = b;
         b= a%b;
        a=temp;
    }
    return  a;
};
int main(){
    
    int a,b;
    cout<<"Enter two value = ";
    cin>>a>>b; 
    cout<<"GCD of these two number is = "<<gcd(a,b);
    return 0;
    
}