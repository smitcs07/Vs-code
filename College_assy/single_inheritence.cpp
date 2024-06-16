#include<iostream>
using namespace std;

class  A{
    int a;
    public:
    int b,x;
    void getdata();
};
 
 class B : public A {
     int sum;
     public:
     void add();
     void display();
 };
     
     void A:: getdata(){
        cout<<"Enter first value to add: ";
        cin>>a;
        x=a;
        cout<<"Enter second value to add: ";
        cin>>b;
     }

     void B:: display(){
        add();
        cout<<"The sum is: "<<sum;
     }

     void B:: add(){
        sum =x+b;
     }

int main(){
    B d;
    d.getdata();
    d.display();
}































