#include<iostream>
using namespace std;
class demo
{
int *p;
public:
demo()
{
p=new int;
*p=10;
}
demo(int v)
{
p=new int;
*p=v;
}
int display()
{
cout<<*p<<endl;
}
};
int main()
{
demo d;
d.display();
demo d1(2);
d1.display();
return 0;
}
