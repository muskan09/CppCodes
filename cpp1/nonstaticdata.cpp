#include<iostream>
using namespace std;
class temp{
int i;
int c;
public:
void getdata(void);
void putdata(void);
};
void temp::getdata()
{
cout<<"Enter values"<<endl;
cin>>i;
}
void temp::putdata()
{
cout<<"output"<<c<<endl;
c=c+1;
}

int main()
{
class temp t,t1,t2;
t.getdata();
t.putdata();
t1.getdata();
t1.putdata();
t2.getdata();
t2.putdata();
return 0;
}
