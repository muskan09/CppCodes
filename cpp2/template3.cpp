#include<iostream>
using namespace std;
template <class a,class b>
a swap(a num1,b num2){
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  return(num1,num2);
  }
  int main(){
    int m,n;
    cout<<"m,n"<<"\n";
    cin>>m>>n;
    cout<<swap(m,n);
    return 0;
  }
