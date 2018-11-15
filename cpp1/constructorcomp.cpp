#include<iostream>
using namespace std;
class complex
{
int real,imag,r,i;
public:
complex()
{
real=0;
complex=0;
}
complex(int a,int b)
{
real=a;
complex=b;
}
friend complex sum(complex);
friend complex display(complex);
};

complex sum(complex c1,complex c2)
{
int r=c1.real+c2.real;
int i=c1.imag+c2.imag;
cout<<"real"<<r<<"+"<<"imag"<<i;
}
complex display()
{
cout<<"real"<<real<<"+"<<"imag"<<imag;
}
int main()
{
class complex s1,s2,s3,s4;
s1.complex();
s2.complex();
sum(s1,s2);
//s3.display();
s3.complex(2,3);
s4.complex(4,5);
sum(s3,s4);
return 0;
}*/ 

