#include<iostream>
using namespace std;
void push();
int pop();
void traverse();
int stack[10],top=-1,item;
int main(){
    int choice;
    char ch;
     do{
    cout<<"Enter your choice: ";
    cout<<"\nPress 1 To Push ";
    cout<<"\nPress 2 To pop ";
    cout<<"\nPress 3 To traverse ";
    cout<<"\nPress any one key: ";
    cin>>choice;

     switch (choice)
    {
    case 1:push();
        break;
    case 2:cout<<"The deleted element is: "<<pop();
        break;
    case 3:traverse();
        break;    
    default:cout<<"\nEnter valid choice ";
    }
     cout<<"\nTo enter more choice press 'y': ";
     cin>>ch;
    }while(ch=='y'||ch=='Y');
}

void push(){
    if(top==9){
        cout<<"\nThe stack is full";
    }
    else{
    cout<<"Enter an element: ";
    cin>>item;
    top=top+1;
    stack[top]=item;
    }
}

int pop() {
    if (top == -1) {
        cout << "Stack is empty";
        return -1;
    } else {
        item = stack[top];
        top--;
        return item;
    }
}

void traverse(){
        if(top==-1){
        cout<<"Stack is empty";
    }
    else{
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<" ";
        }
    }
}

int pop() {
    if (top == -1) {
        cout << "Stack is empty";
        return -1; // Return a sentinel value
    } else {
        item = stack[top];
        top--;
        return item;
    }
}































