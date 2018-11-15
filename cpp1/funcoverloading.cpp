#include<iostream>
using namespace std;
void func(int);
void func(int x)
{
cout<<x<<endl;
}

void func(double,int);
void func(double m,int n)
{
cout<<m<<n<<endl;
}

int func(long,int,int);
int func(long a,int b,int c)
{
cout<<a<<b<<c<<endl;
}
int main()
{
func(9);
func(6.6,8);
func(4L,7,5);
return 0;
}
