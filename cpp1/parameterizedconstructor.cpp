#include<iostream>
using namespace std;
class demo
{
int x,y;
public:
demo(int a,int b)
{
x=a;
y=b;
}
void dispdata()
{
cout<<"x"<<x<<"y"<<y;
}
};
int main()
{
demo d(2,3);
d.dispdata();
return 0;
}
