#include<iostream>
using namespace std;
class B{
  int a;
public:
  int b;
  void get_ab();
  int get_a(void);
  void show_a(void);
};
class D:private B{
  int c;
public:
  void mul(void);
  void display(void);
};
void B::get_ab(void){
  cout<<"enter values for a and b";
  cin>>a>>b;
}
int B::get_a(void){
  return a;
}
void B::show_a(){
  cout<<"a="<<a<<endl;
}
void D::mul(void){
  get_ab();
  c=b*get_a();
}
void D::display(void){
  show_a();
  cout<<"b="<<b<<endl;
  cout<<"c"<<c<<endl;
}
int main(){
  D d;
  d.mul();
  d.display();
  return 0;
}
