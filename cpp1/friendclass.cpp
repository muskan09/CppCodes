#include<iostream>
using namespace std;
class increment;

class employee{
friend class increment;
int sal;
string name;
public:
void info()
{
cout<<"enter your name"<<endl;
cin>>name;
cout<<"enter your current salary"<<endl;
cin>>sal;
}
};


class increment{
public:
void cal(employee e)
{
int ns;
if(e.sal>1000)
{
ns=500+e.sal;
}
else
{
ns=e.sal+50;
}
cout<<"new salary is"<<ns<<endl;
}
};
int main()
{
class employee x;
class increment y;
x.info();
y.cal(x);
return 0;
}










