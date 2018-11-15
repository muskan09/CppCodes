#include<iostream>
using namespace std;
class student{
protected:
int rollno;
public:
void getnumber(int);
void putnumber();
};
class test:public student{
protected:
float sub1;
float sub2;
public:
void getmarks(float,float);
void putmarks();
};
class result:public test{
protected:
float total;
public:
void display();
};
//------------------------------------------------------------------write your code below----------------------------------------------------------
void student::getnumber(int x){
rollno=x;
}
void test::getmarks(float c,float d){
sub1=c;
sub2=d;
}
void result::display(){
total=sub1+sub2;
cout<<rollno<<endl<<total<<endl;
}



//-------------------------------------------------------------------------------------------------------------------------------------------------
int main(){
int num;
float a,b;
cout<<"enter num,a,b"<<endl;
cin>>num>>a>>b;
result r1;
r1.getnumber(num);
r1.getmarks(a,b);
r1.display();
return 0;
}
