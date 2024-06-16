#include<iostream>
using namespace std;

// Impliment it with array
class stack
{
    int *arr;
    int size;
    int top;

    public:

    // Constructor
    stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }


// push
void push(int value){
    if(top==size-1){
        cout<<"stack Overflow\n";
        return;
    }
    else{
        top++;
        arr[top]=value;
        cout<<"pushed "<<value<<" into the stack\n";
    }
}
// pop
void pop(){
    if(top==-1){
        cout<<"Stack is underflow\n";
    }
    else{
        cout<<"popped "<<arr[top]<<" from the stack\n";
        top--;
    }
}
// peek
int peek(){
    if(top==-1){
        cout<<"stack is empty\n";
        return -1;
    }
    else{
        return arr[top];
    }
}
// IsEmpty
bool IsEmpty(){
    return top==-1;
}
// IsSize
int IsSize(){
    return top+1;
}
};
int main(){
    stack s(5);
    s.push(5);
    s.push(6);
    s.push(3);
    s.push(9);
    s.push(3);
    // s.push(3);
    cout<<s.peek();
    s.pop();
    cout<<endl<<s.peek();
    cout<<endl<<s.IsEmpty();
    cout<<endl<<s.IsSize();
}