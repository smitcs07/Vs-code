/* #include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    if(n>1){
        f=f*n;
        n--;
        fact(n);
        return f;
    }
}
int main(){
    int n;
    cout<<"Enter the value to find factorial: ";
    cin>>n;
    int f=fact(n);
    cout<<"The factorial is: "<<f;
}
*/

/* #include<iostream>
using namespace std;

int fact(int n){
    if(n==1) return 1;
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the value to find factorial: ";
    cin>>n;
    int f=fact(n);
    cout<<"The factorial is: "<<f;
}
*/

#include<iostream>
using namespace std;

int fact(int n){
    if(n==1) return 1;
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    char st='y';
    
    while(st=='y'||st=='Y'){
    cout<<"Enter the value to find factorial: \n";
    cin>>n;
    int f=fact(n);
    cout<<"The factorial is: "<<f;
    cout<<"\nTo calculate more factorials press 'y' ";
    cin>>st;
    }
}







