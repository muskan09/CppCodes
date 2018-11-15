#include<iostream>
using namespace std;
class demo
{
int x,y;
public:
demo(int a,int b=0)
{
x=0;
y=0;
}
int display()
{
cout<<a<<b<<endl;
}
};
int main()
{
demo d(2);
d.display();
return 0;
}
