#include<iostream>
using namespace std;
template <class g>
g great(g num1,g num2){
  if(num1>num2){
    return num1;
  }
  else
  {
    return num2;
  }
}
int main(){
  int m,n;
  cin>>m;
  cin>>n;
  cout<<great(m,n);
  return 0;
}
