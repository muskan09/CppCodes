#include<iostream>
using namespace std;
class data{
int h1,h2,m1,m2,tm,m,h,th;
public:
void get()
{
cout<<"enter hour";
cin>>h;
cout<<"enter minute";
cin>>m;
}
void calculation(data x1,data x2){
m=
}
void disp(data x1,data x2)
{
cout<<"the clock now points to"<<x1.th<<"hrs"<<x2.m<<"min"<<endl;
}
};
int main()
{
data t1,t2,t3;
t1.get();
t2.calculation(t1);
t3.disp(t2);
return 0;
}
