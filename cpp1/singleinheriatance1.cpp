#include<iostream>
using namespace std;
class A{
int x;
public:
int getdata(){
cin>>x;
return x;
}
void show(){
cout<<"value of x"<<x<<endl;
}
};
class B:public A{
public:
int y;
void add(){
cout<<"value of sum"<<getdata()+y<<endl;
}
};
int main(){
B b;
b.y=30;
b.getdata();
b.add();
b.show();
return 0;
}

