#include<iostream>
using namespace std;
 inline int squa(int x){
    return x*x;
 }
   

int main(){
    int num1;
    cout<<"Provides the value  = ";
    cin>>num1;
    cout<<"Square of provided input is  = "<<squa(num1)<<endl;
    
    
    return 0;
}