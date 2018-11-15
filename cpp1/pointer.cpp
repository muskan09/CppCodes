#include<iostream>
using namespace std;
int main(){
int A[5]={5,8,9,6,10};
int *p;
int *q;
p=&A[0];
q=&A[3];
cout<<*p++<<endl;
cout<<*q--<<endl;
cout<<p=*(p+2)<<endl;
cout<<q=*(q-2)<<endl;
cout<<*++p<<endl;
cout<<++*p<<endl;
cout<<*p++<<endl;
cout<<++(*p);
cout<<(*p)++;
return 0;
}
