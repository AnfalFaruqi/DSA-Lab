#include<iostream>
using namespace std;
#define MAX 4

int top = -1;
int s_arr[MAX];

void pop()
{
	if(top==-1)
	{
		cout<<"Stack Underflow.";
		return;
	}
	
	int value = s_arr[top];
	cout<<"Pop value: "<<value<<" ";
	top--;
	cout<<endl;
}

void push (int data)
{
	if(top==MAX-1)
	{
		cout<<"Stack Overflow.\n";
		return;
	}
	
	top++;
	s_arr[top] = data;
	cout<<"Push element: "<<s_arr[top]<<endl;
}

void peek()
{
	cout<<"\nTop Element: "<<s_arr[top]<<endl;
}

void display()
{
	if(top==-1)
	{
		cout<<"Stack is empty.\n";
		return;
	}
	
	for(int i=0 ; i<MAX ; i++)
	{
		cout<<s_arr[i]<<" ";
	}
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	display();	
	peek();
	push(6);
	
	cout<<endl;
	
	pop();
	pop();
	pop();
	pop();
	pop();
	
	return 0;
}

