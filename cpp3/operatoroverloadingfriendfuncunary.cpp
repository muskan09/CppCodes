#include<iostream>
using namespace std;
class number{
int x;
public:
void setdata(int a){
x=a;
}
void disp(){
cout<<"value"<<x;
}
friend void operator-(number& t){
t.x=-t.x;                                               // - operator overloading with frnd func
}
};

int main(){
number n;
n.setdata(-9);
n.disp();
-n;
n.disp();
return 0;
}

