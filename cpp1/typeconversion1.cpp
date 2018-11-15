#include<iostream>
using namespace std;
//destination class
class square{
int side;
public:
square(int s){
side=s;
}
int getside(){
return side;
}
};
class rectangle{
int length,breadth;
public:
rectangle(int l,int b){
length=l;
breadth=b;
}
rectangle(square s){
int sqrside=s.getside();
length=breadth=sqrside;
}
void showdata()
{
cout<<length<<breadth;
}
};
int main(){
rectangle R(10,20);
R.showdata();
square S(50);
R=S;
R.showdata();
return 0;
}
