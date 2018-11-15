#include<iostream>
using namespace std;
class complex{
int real,imag;
public:
void getdata()
{
cout<<"enter real part";
cin>>real;
cout<<"enter imaginary part";
cin>>imag;
}
void disp()
{
cout<<real<<"+i"<<imag;
}
friend complex addcomplex(complex);
};
complex addcomplex(complex obj1,complex obj3)
{
complex obj2;

obj2.real=real+obj1.real;
obj2.imag=imag+obj2.imag;
return obj2;
}
int main()
{
complex c1,c2;
c1.getdata();
c2.getdata();
complex c3;
c3=c2.addcomplex(c1);
c2.disp();
c3.disp();
return 0;
}
