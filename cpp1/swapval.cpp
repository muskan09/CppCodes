#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
int a,b;
cin>>a>>b;
swap(a,b);
return 0;
}
void swap(int x,int y)
{
x=x+y;
y=x-y;
x=x-y;
cout<<x<<y;
}
