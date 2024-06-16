#include<iostream>
using namespace std;
void push();
int pop();
void traverse();
int stack[10];
int Top=-1;
int main(){
	int choice;
	char ch;
	do{
		cout<<"\n1.Push ";
		cout<<"\n2. Pop ";
		cout<<"\n3.Traverse ";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice){
			case 1: push();
			break;
			case 2: cout<<"\nThe deleted element is: "<<pop();
			break;
			case 3: traverse();
			break;
			default: cout<<"\nYou Entered Wrong choice";
		}
		cout<<"\nDo You wish to continue press:(Y) ";
		cin>>ch;
		}
		while(ch=='y'||ch=='Y');
	}
	void push(){
		int items;
		if(Top==9){
			cout<<"\nThe stack is Full";
		}
		else{
			cout<<"Enter the element to be inserted: ";
			cin>>items;
			Top=Top+1;
			stack[Top]=items;
		}
	}
	int pop(){
		int item;
		if(Top==-1){
			cout<<"The stack is Empty\n";
		}
		else{
			item=stack[Top];
			Top=Top-1;
		}
		return(item);
	}
	void traverse(){
		int i;
		if(Top==-1){
			cout<<"The stack is empty\n";
		}
		else{
            cout<<"Traverse the element\n";
			for(i=Top;i>=0;i--){
				cout<<stack[i]<<" ";
			}
		}
    }



    