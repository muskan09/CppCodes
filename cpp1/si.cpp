#include<iostream>
using namespace std;
class si{
float princi,rate,time,interest;
public:
si(float x,float y,float z)
{
princi=x;
rate=y;
time=z;
}
void show()
{
interest=(princi*rate*time)/100;
cout<<interest<<endl;
}
};
int main()
{
float p,r,t;
cin>>p>>r>>t;
si a1(p,r,t);
a1.show();
si a2(2000,3,2);
a2.show();
return 0;}
