#include<iostream>
using namespace std;
class figure{
protected:
int a,r;
public:
void area(){
cout<<"enter radius"<<endl;
cin>>r;
a=r*r;
cout<<"area of circle is"<<a<<endl;
}
};
class rectangle:public virtual figure{
protected:
int m,n,x;
public:
void area(){
cout<<"enter length,breadth"<<endl;
cin>>m>>n;
x=m*n;
cout<<"area of rectangle is"<<x<<endl;
}
};
class triangle:public virtual figure{
protected:
float c,h,b;
public:
void area(){
cout<<"enter height,base"<<endl;
cin>>h>>b;
c=0.5*h*b;
cout<<"area of triangle is"<<c<<endl;
}
};
int main(){
rectangle o2;
triangle o3;
o2.figure::area();
o2.area();
o3.area();
return 0;
}

