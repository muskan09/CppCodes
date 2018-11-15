#include<iostream>
using namespace std;
class demo1{
protected:
int m=1;
public:
void disp(){
cout<<m;
}
};
class demo2:public demo1{
protected:
int n=2;
public:
void disp(){
cout<<n;
}
};
class demo3:public demo2{
public:
void disp(){
//cout<<"demo3";
demo1::disp();
}
};
int main(){
demo3 d;
d.disp();
return 0;
}


