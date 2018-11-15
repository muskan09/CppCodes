#include<iostream>
using namespace std;
class M{
protected:
int m;
public:
void getm(int);
};
class N{
protected:
int n;
public:
void getn(int);
};
class P:public M,public N{
public:
void display();
};
//----------------------write your code below------------------
void M::getm(int x){
m=x;
}
void N::getn(int y){
n=y;
}
void P::display(){
cout<<"m"<<m<<endl<<"n"<<n<<endl;
}
//-------------------------------------------------------------
int main(){
int a,b;
cin>>a>>b;
P p1;
p1.getm(a);
p1.getn(b);
p1.display();
return 0;
}
