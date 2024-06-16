// With no argument and return
#include<iostream>
using namespace std;
int summation(){
    int n1,n2;
        cout<<"Enter the first value to sum: ";
    cin>>n1;
        cout<<"Enter the second value to sum: ";
    cin>>n2;
      return(n1+n2);
    }

int main(){
    cout<<"The sum is: "<<summation();
    }