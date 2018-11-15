#include<iostream>
using namespace std;
class test{
int a,b,c;
public:
void getdata(int x,int y,int z);
void operator-();
void disp();
};
void test::getdata(int x,int y,int z){
a=x;
b=y;
c=z;
}
void test::operator-(){      
a=-a;                           
b=-b;                                                        //- operator overloading w/o frnd func
c=-c;
}
void test::disp(){
cout<<"a"<<a<<endl;
cout<<"b"<<b<<endl;
cout<<"c"<<c<<endl;
}
int main(){
test o;
o.getdata(-10,20,30);
o.disp();
-o;
o.disp();
return 0;
}

