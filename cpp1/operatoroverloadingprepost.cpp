#include<iostream>
using namespace std;
class test{
int a,b;
public:
void setdata(int x,int y){
a=x;
b=y;}
void disp(){
cout<<"a"<<a<<endl<<"b"<<b<<endl;}
test operator++(){
test t;
t.a=++a;
t.b=++b;
return t;
}
test operator++(int){
test s;
s.a=a++;
s.b=b++;
return s;
}
};
int main(){
test t1,t3;
t1.setdata(3,1);
t3=++t1;
t3.disp();
test t2,t4;
t2.setdata(4,2);
t4=t2++;
t4.disp();
return 0;
}

