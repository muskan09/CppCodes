#include<iostream>
using namespace std;
class second;
class first
{
int a;
public:
void get(void)
{
cout<<"enter first number"<<endl;
cin>>a;
}
friend int mean1(first,second);
};

class second{
int b;
public:
void getd(void)
{
cout<<"enter second number"<<endl;
cin>>b;
}
friend int mean1(first,second);
};

int mean1(first o1,second o2)
{
int c=(o1.a+o2.b)/2;
cout<<"the av is"<<c;
return 0;
}

int main(){
class first x;
class second y;
x.get();
y.getd();
mean1(x,y);
return 0;
}
