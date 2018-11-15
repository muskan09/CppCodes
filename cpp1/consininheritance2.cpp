#include<iostream>
using namespace std;
class cultural{
protected:
int c;
public:
cultural(int x){
c=x;
cout<<"constructor of cultural is called"<<endl;
}
};
class technical{
protected:
int t;
public:
technical(int y){
t=y;
cout<<"constructor of technical is called"<<endl;
}
};
class explore:public technical,public cultural{
protected:
int e;
public:
explore(int m,int n,int r):technical(m),cultural(n){
e=r;
cout<<"constructor of explore is called"<<endl;
}
~explore(){
cout<<"destructor";
}
};
int main(){
explore e1(4,5,6);
return 0;
}
