#include<iostream>
using namespace std;
class data{
int h1,h2,m1,m2,tm,m,h,th;
public:
void get()
{
cout<<"enter hour1";
cin>>h1;
cout<<"enter hour2";
cin>>h2;
cout<<"enter minute1";
cin>>m1;
cout<<"enter minute2";
cin>>m2;
}
void calculation(data o1,data o2,data o3,data o4){
tm=o1.m1+o2.m2;
m=tm%60;
h=tm/60;
th=o1.h1+o2.h2+h;
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
