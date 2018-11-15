#include<iostream>
using namespace std;
class number{
float r1,r2,c1,c2,r,c;
public:
void getval(void);
void addition(void);
void substraction(void);
void multiplication(void);
void division(void);
};
void number::getval(){
cout<<"real num1"<<endl;
cin>>r1;
cout<<"real num2"<<endl;
cin>>r2;
cout<<"comp num1"<<endl;
cin>>c1;
cout<<"comp num2"<<endl;
cin>>c2;
}
void number::addition(){
r=r1+r2;
c=c1+c2;
cout<<"add"<<r<<"+"<<"i"<<c;
}
void number::substraction(){
r=r1-r2;
c=c1-c2;
cout<<"sub"<<r<<"-"<<"i"<<c;
}
void number::multiplication(){
r=r1*r2;
c=c1*c2;
cout<<"mul"<<r<<"*"<<"i"<<c;
}
void number::division(){
r=r1/r2;
c=c1/c2;
cout<<"div"<<r<<"/"<<"i"<<c;
}
int main()
{
class number n;
n.getval();
int a;
cout<<"enter 1 for add,2 for sub,3 for mul,4 for div"<<endl;
cin>>a;
switch(a){
case 1:n.addition();
break;
case 2:n.substraction();
break;
case 3:n.multiplication();
break;
case 4:n.division();
break;
default: cout<<"invalid";
}
return 0;
}
