#include<iostream>
using namespace std;
class data{
int  hr,min;
public:
void get()
{
cout<<"enter hours";
cin>>hr;
cout<<"enter minutes";
cin>>min;
}
void calculation(data *a,data *b){
min=*a.min+*b.min;
hr=min/60;
min=min%60;
hr+=(*a.hr+*b.hr);
}
void disp()
{
cout<<"the clock now points to"<<hr<<"hrs"<<":"<<min<<"min"<<endl;
}
};
int main()
{
data *t1,*t2,t3;
*t1.get();
*t2.get();
t3.calculation(*t1,*t2);
t3.disp();
return 0;
}
