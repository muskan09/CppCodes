#include<iostream>
using namespace std;
template <class rect1,class rect2>
void area(rect1 a,rect2 b){
  cin>>a>>b;
  
 cout<<a*b;
  
}
template <class sq>
void area(sq s){
  cin>>s;
  cout<<s*s;
}
template <class box1,class box2,class box3>
void area(box1 x,box2 y,box3 z){
  cin>>x>>y>>z;
  cout<<x*y*z;
}
template <class circ1>
void area(circ1 c,circ1 d,circ1 e){
  cin>>c;
  cout<<c*c*e;
}

int main(){
  //float area;
  float length,breadth;
  cout<<"rect";
  area(length,breadth);//area of rectangle
  int side;
  cout<<"square";
  area(side);//area of square
  int l;
  float b;
  double h;
  cout<<"box";
  area(l,b,h);//area of box
  float r;
  float pi=3.14;
  cout<<"circle";
  area(r,r,pi);//area of circle
  return 0;

}
