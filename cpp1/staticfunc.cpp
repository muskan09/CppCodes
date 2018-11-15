#include<iostream>
using namespace std;
class temp{
int i;
static int c;
public:
void getdata(void);
void putdata(void);
static void func(void);
};
int temp::c;

void temp::getdata(void)
{
cout<<"Enter values"<<endl;
cin>>i;
c++;
}
void temp::func(void)
{cout<<"count"<<c<<endl;
}

void temp::putdata(void)
{
cout<<"i"<<i<<endl;
}

int main()
{
class temp t,t1,t2;
t.getdata();
t.putdata();
temp::func();
t1.getdata();
t1.putdata();
temp::func();
t2.getdata();
t2.putdata();
temp::func();
return 0;
}
