#include<iostream>
using namespace std;
template<class T>
class sortarray{
T *a;
int size;
public:
sortarray(int n){
size=n;
a=new T[n];
}
void read(){
for(int i=0;i<size;i++){
cin>>a[i];
}
}
void print(){
for(int i=0;i<size;i++){
cout<<a[i];
}
}
void sort1(){
for(int i=0;i<size;i++){
for(int j=0;j<(size-i-1);j++){
if(a[j]>a[j+1]{
T temp;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
s};
int main(){
int ch;
int s;
cout<<"s";
cin>>s;
sortarray<string>c(s);
sortarray<int>a(s);
sortarray<float>b(s);
cout<<"choice123";
cin>>ch;
switch(ch){
case 1:
a.read();
a.sort1();
a.print();
break;
case 2:
b.read();
b.sort1();
b.print();
break;
case 3:
c.read();
c.sort1();
c.print();
break;
default:
cout<<"wrong choice"
break;
}
return 0;
}
