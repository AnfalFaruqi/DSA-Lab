#include<iostream>
using namespace std;

void sum(int *a, int *b)
{
	int sum;
	
	sum = *a + *b;
	
	cout<<"\nSum of "<<*a<<" and "<<*b<<" is: "<<sum;
}

int main()
{
	int a,b;
	
	cout<<"Enter 1st number: ";
	cin>>a;
	
	cout<<"Enter 2nd number: ";
	cin>>b;
	
	sum(&a,&b);
	
	return 0;
}
