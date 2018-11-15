#include<iostream>
using namespace std;
//source class
class rectangle{
int length,breadth;
public:
rectangle(){
length=0;
breadth=0;
}
rectangle(int l,int b){
length=l;
breadth=b;
}
void showdata(){
cout<<length<<breadth;
}
};
class square{
int side;
public:
square(int s){
side=s;}
operator rectangle()
{
rectangle R(side,side);
return R;}
};
int main(){
rectangle R(10,20);
R.showdata();
square S(50);
R=S;
R.showdata();
return 0;
}
