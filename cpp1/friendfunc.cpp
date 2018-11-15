#include<iostream>
using namespace std;
class dist
{
int m,km,z;
public:
void get()
{
cout<<"enter"<<endl;
cin>>km>>m;
}
void display()
{
cout<<"output"<<c;
}
friend int convert(dist);

};

int convert(dist o1)
{
int c=(o1.km * 1000) +(o1.m);
return c;
}

int main(){
dist a;
a.get();
convert(a);
a.display();
return 0;
}
