#include<iostream>
using namespace std;
template <class t>
t square(t num)
{
  return num*num;
}
int main(){
  int m;
  float p;
  cout<<"m";
  cin>>m;
  cout<<square(m);
  cout<<"p";
  cin>>p;
  cout<<square(p);

  return 0;
}
