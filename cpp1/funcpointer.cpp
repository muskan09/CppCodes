#include<iostream>
using namespace std;
void (*fp) (int);
void print(int);
int main(){
fp=print;
(*fp)(20);
fp(10);
}
void print(int value){
  cout<<value;
}
