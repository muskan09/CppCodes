#include<iostream>
#include<math.h>
using namespace std;
void power(double,int a=2);//default argument
void power(double b,int a)
{
double c = pow(b,a);
cout<<c<<endl;
}
int main()
{
double m;
int n;
cout<<"Enter values of m,n";
cin>>m>>n;
power(m,n);
power(m);
return 0;
}

