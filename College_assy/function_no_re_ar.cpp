#include<iostream>
using namespace std;
int summation(int n1,int n2){
      int sum;
      sum=n1+n2;
      cout<<"The sum is: "<<sum;
    }

int main(){
    int n1,n2;
        cout<<"Enter the first value to sum: ";
    cin>>n1;
        cout<<"Enter the second value to sum: ";
    cin>>n2;
    summation(n1,n2);
    }