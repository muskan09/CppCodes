#include<iostream>
using namespace std;
class student{
protected:
int st;
public:
void stu(){
cout<<"Student"<<endl;
}
};
class test:public virtual student{
protected:
int t;
public:
void tes(){
cout<<"test"<<endl;
}
};
class score:public virtual student{
protected:
int s;
public:
void sco(){
cout<<"score"<<endl;
}
};
class result:public test,public score{
protected:
int a;
public:
void res(){
cout<<"result"<<endl;}
};
int main(){
result r;
r.stu();
r.tes();
r.sco();
r.res();
return 0;
}
