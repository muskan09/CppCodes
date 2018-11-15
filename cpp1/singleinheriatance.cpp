#include<iostream>
using namespace std;
class A{
int x;
public:
int a,b,c;
void add(){
a=2;
b=3;
c=a+b;
cout<<c<<endl;}
};
class B:public A{
int y;
public:
int z,m;
z=2;
m=2;
void show(){
x=m+z;
cout<<x<<endl;
y=c+1;
cout<<y<<endl;}
};
int main(){
B b;
b.add();
b.show();
return 0;
}

