#include<iostream>
using namespace std;
inline void add(int,int);
inline void add(int x,int y)
{
x=x+y;
cout<<x<<endl;
}
inline void sub(int,int);
inline void sub(int x,int y)
{
y=x-y;
cout<<y;
}
int main()
{
int a,b;
cin>>a>>b;
add(a,b);
sub(a,b);
return 0;
}
