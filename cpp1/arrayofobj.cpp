#include<iostream>
using namespace std;
class faculty{
string a,b;
public:
void fn(){
cin>>a;
}
void fd(){
cin>>b;
}
void disp(){
cout<<a<<b;}
};
int main()
{
faculty f1[3];
int i;
for(i=0;i<3;i++)
{
f1[i].fn();
f1[i].fd();
f1[i].disp();
}
return 0;
}

