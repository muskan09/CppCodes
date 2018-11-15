#include<iostream>
using namespace std;
template <class T,class T2>
T swap(T num1,T num2){
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  return(num1,num2);
  }
  int main(){
    int m,n;
    cout<<" enter m,n"<<"\n";
    cin>>m>>n;
    
swap(m,n);
cout<<m<<" "<<n;
    return 0;
  }
