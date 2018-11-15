#include<iostream>
using namespace std;
int &max(int&,int&);
int &max(int &x,int &y)
{
if(x>y)
return x;
else
return y;
}
int main()
{
int a,b;
cin>>a>>b;
&max(&a,&b);
max(a,b)=-1;
cout<<a<<b;
return 0;
}

