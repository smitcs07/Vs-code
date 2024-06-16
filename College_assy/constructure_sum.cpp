#include<iostream>
using namespace std;

class  A{
    int a,b;
    public :
    A();
    A(int,int);
};
A::A(){
    a=10;
    b=10;
    cout<<"The sum is: "<<a+b;
}

A::A(int x,int y){
    a=x;
    b=y;
    cout<<"\nThe sum is: "<<a+b;
}

int main(){
    A obj;
    A obj1(10,20);
}