#include<iostream>
using namespace std;
float (*func) (float,float);
float add(float,float);
float sub(float,float);
int main(){
  func=add;
  cout<<func(9.5,3.1)<<endl;
  func=sub;
  cout<<func(9.5,3.1)<<endl;
return 0;
}
float add(float x,float y){
  return x+y;
}
float sub(float x,float y){
  return x-y;
}
