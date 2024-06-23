#include<iostream>
using namespace std;

class  A{
    int a,b,c;
    float d,c1;
    public:
    void area(int len,int bre){
        a=len;
        b=bre;
        cout<<"The area of rectangle is: "<<a*b;
    }
        void area(int side1,int side2,int hei){
        a=side1;
        b=side2;
        c=hei;
        cout<<"\nThe area of Trapezium is: "<<.5*(a+b)*c;
    }
        void area(float side1,int side2){
        d=side1;
        b=side2;
        c1=b*d;
        cout<<"\nThe area of rectangle is: "<<c1;
    }

};

int main(){
    A obj;
    obj.area(10,20);
    obj.area(10,20,38);
    obj.area(10.34f,23);
}

































