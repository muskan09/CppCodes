#include<iostream>
using namespace std;
class demo
{
int x,y;
public:
demo()
{
x=0;
y=0;
}
void dispdata()
{
cout<<"x"<<x<<"y"<<y;
}
};
//demo::demo();
int main()
{
demo d;
d.dispdata();
return 0;
}
