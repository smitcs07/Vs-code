#include<iostream>
using namespace std;

class  A{
    int a,b;
    public :
    void add(int,int);
};
void A::add(int x,int y){
    a=x;
    b=y;
    cout<<"The sum is: "<<a+b;
}

int main(){
    A obj1;
    obj1.add(10,30);
}