#include<iostream>
#include<string>
using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* top = NULL;

void push(string data) 
{
    Node* newNode = new Node(); 
    newNode->data = data;       
    newNode->next = top;         
    top = newNode;              
    cout<<"Item added: "<<data<<"\n";
}

void pop() 
{
    if(top==NULL) 
	{
        cout<<"All items removed\n";
        return;
    }
    
    Node* temp = top;       
    string value = top->data;  
    top = top->next;        
    delete temp;            
    cout<<"Item removed: "<<value<<" ";
}
void peek() 
{
    if (top == NULL) 
	{
        cout<<"Stack is empty\n";
    } 
	else 
	{
        cout<<"Top item: "<<top->data<<"\n";
    }
}

void display() 
{
    if (top==NULL) 
	{
        cout<<"List is empty\n";
    }
    
    Node* temp = top;
    cout<<"Grocery list: ";
    
    while (temp!=NULL) 
	{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}
int main() {
	
    push("orange juice");
    push("soap");
    push("eggs");
    cout<<endl;
    peek();  
    cout<<endl;
    display();  
    pop(); 
	cout<<endl; 
	cout<<endl; 
    display(); 
    pop();  
    cout<<endl;
    cout<<endl;
    display(); 
	pop();  
    cout<<endl;
    cout<<endl; 
    pop();
    return 0;
}

