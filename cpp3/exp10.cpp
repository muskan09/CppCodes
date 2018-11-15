#include<iostream>
using namespace std;
void swap_by_val(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<endl<<"Number 1:"<<a<<endl<<"Number 2:"<<b<<endl;
}
void swap_ref(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n1,n2;
	cout<<"Enter two numbers to swap\n"; 
	cin>>n1>>n2;
	cout<<"Number 1:"<<n1<<endl<<"Number 2:"<<n2<<endl;
	cout<<"\nCall by value:-\n";
	swap_by_val(n1,n2);
	cout<<"\nCall by reference:-\n";
	swap_ref(n1,n2);
	cout<<endl<<"Number 1:"<<n1<<endl<<"Number 2:"<<n2<<endl;
	return 0;
}
