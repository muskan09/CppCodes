#include<iostream>
using namespace std;
int add(int,int);
int sub(int,int);
int operate(int (*op.func) (int,int),int,int);
int main(){
int result;
result=operate(add,9,7);
cout<<result;
result=operate(sub,9,7);
cout<<result;
return 0;
}
int add(int a,int b){
return a+b;
}
int sub(int a,int b){
return a-b;
}
int operate(int (*op.func) (int,int),int a,int b){
int result;
result=(*op.func)(a,b);
return result;
}

