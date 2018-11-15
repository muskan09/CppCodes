#include<iostream>
using namespace std;
class demo{
int h,m;
public:
demo(){
h=0;
m=0;
}
demo(int t){
h=t/60;
m=t%60;
}
void getdata(){
cout<<"enter h,m"<<endl;
cin>>h>>m;
}
void showdata(){
cout<<"h"<<h<<endl<<"m"<<m<<endl;
}
operator int(){
int t=h*60+m;
return t;
}
};
int main(){
int min;
cout<<"enter min"<<endl;
cin>>min;
demo t1,t2;
t1=min;
t1.showdata();
t2.getdata();
t2.showdata();
min=t2;
cout<<"min"<<min;
return 0;
}
