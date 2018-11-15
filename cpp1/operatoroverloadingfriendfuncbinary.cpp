//+ overload binary with frnd func
#include<iostream>
using namespace std;
class test{
int x,y;
public:
void setdata(int a,int b){
x=a;
y=b;

}
friend test operator+(test t,test t1){
test t3;
t3.x=t1.x+t.x;
t3.y=t1.y+t.y;
return t3;
}
void disp(){
cout<<"x"<<x<<endl<<"y"<<y<<endl;
}
};

int main(){
test o,o1,o2;
o.setdata(4,9);
o1.setdata(2,3);
o.disp();
o1.disp();
o2=o+o1;
o2.disp();
return 0;
}
//- overload binary with frnd func
/*#include<iostream>
using namespace std;
class test{
int x,y;
public:
void setdata(int a,int b){
x=a;
y=b;

}
friend test operator-(test t,test t1){
test t3;
t3.x=t1.x-t.x;
t3.y=t1.y-t.y;
return t3;
}
void disp(){
cout<<"x"<<x<<endl<<"y"<<y<<endl;
}
};

int main(){
test o,o1,o2;
o.setdata(4,9);
o1.setdata(2,3);
o.disp();
o1.disp();
o2=o-o1;
o2.disp();
return 0;
}*/
// "/" overload binary with frnd func
/*#include<iostream>
using namespace std;
class test{
int x,y;
public:
void setdata(int a,int b){
x=a;
y=b;

}
friend test operator/(test t,test t1){
test t3;
t3.x=t1.x/t.x;
t3.y=t1.y/t.y;
return t3;
}
void disp(){
cout<<"x"<<x<<endl<<"y"<<y<<endl;
}
};

int main(){
test o,o1,o2;
o.setdata(4,9);
o1.setdata(2,3);
o.disp();
o1.disp();
o2=o/o1;
o2.disp();
return 0;
}*/
