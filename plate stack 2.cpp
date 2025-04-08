#include<iostream>
using namespace std;
#define MAX 3

int top = -1;
int s_arr[MAX];

void pop()
{
	if(top==-1)
	{
		cout<<"Zero Remaining Plates.";
		return;
	}
	
	int value = s_arr[top];
	cout<<"Removing Plate No. : "<<value<<" ";
	top--;
	cout<<endl;
}

void push (int data)
{
	if(top==MAX-1)
	{
		cout<<"Can't Add More Plates.\n";
		return;
	}
	
	top++;
	s_arr[top] = data;
	cout<<"Adding Plate No. : "<<s_arr[top]<<endl;
	
}

void peek()
{
	cout<<"\nTop Plate: "<<s_arr[top]<<endl;
}

void display()
{
	if(top==-1)
	{
		cout<<"Can't Remove Plates.\n";
		return;
	}
	
}

int main()
{
	push(1);
	push(2);
	push(3);
	display();	
	peek();
	cout<<endl;
	cout<<"Adding Plate no. 4..."<<endl;
	push(4);
	
	cout<<endl;
	
	int eee;

    cout<<"Do you wish to remove a plate? Yes(1) or No(0): ";
    cin>>eee;
    
	do{			
		switch(eee)
		{
			case 0:
			cout<<"No Plate removed.";
			break;
			
			case 1:
			pop();
			break;
			
			default:
				cout<<"Invalid Input.";
				break;
		}
		
		cout<<"Do you wish to continue? Yes(1) or No(0): ";
		cin>>eee;
		
	}while(true);
	
	
	return 0;
}

