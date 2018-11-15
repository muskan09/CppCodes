#include<iostream>
using namespace std;
class complex{
public:
int real,imag;
int r,c;
void getdata(){
cout<<"Enter data";
cin>>real>>imag;
}
int calc(complex r1,complex r2){
//complex r1,r2;
//int r,c;
r=r1.real+r2.real;
c=r1.imag+r2.imag;
return (r,c);
}
void display(){
cout<<r<<"+"<<c<<"i";
}
};
int main(){
complex c1,c2,c3;
c1.getdata();
c2.getdata();
c3.calc(c1,c2);
c3.display();
return 0;

}

























