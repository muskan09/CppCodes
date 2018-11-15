// "/" overload binary w/o frnd func
#include<iostream>
using namespace std;
class test{
int a,b;
public:
test(){
a=0;
b=0;
}
test(int x,int y){
a=x;
b=y;
}
test operator/(test t);
void disp();
};
test test::operator/(test t){
test temp;
temp.a=a/t.a;//a-,a+
temp.b=b/t.b;
return temp;
}
void test::disp(){
cout<<"a"<<a<<endl;
cout<<"b"<<b<<endl;
}
 
int main(){
test t1,t2,t3;
t1=test(30,40);
t2=test(10,20);
t3=t1/t2;
t1.disp();
t2.disp();
t3.disp();
return 0;
}
//+ overload binary w/o frnd func
/*#include<iostream>
using namespace std;
class test{
int a,b;
public:
test(){
a=0;
b=0;
}
test(int x,int y){
a=x;
b=y;
}
test operator+(test t);
void disp();
};
test test::operator+(test t){
test temp;
temp.a=a+t.a;
temp.b=b+t.b;
return temp;
}
void test::disp(){
cout<<"a"<<a<<endl;
cout<<"b"<<b<<endl;
}
 
int main(){
test t1,t2,t3;
t1=test(30,40);
t2=test(10,20);
t3=t1+t2;
t1.disp();
t2.disp();
t3.disp();
return 0;
}*/


//- overload binary w/o frnd func
/*#include<iostream>
using namespace std;
class test{
int a,b;
public:
test(){
a=0;
b=0;
}
test(int x,int y){
a=x;
b=y;
}
test operator-(test t);
void disp();
};
test test::operator-(test t){
test temp;
temp.a=a-t.a;
temp.b=b-t.b;
return temp;
}
void test::disp(){
cout<<"a"<<a<<endl;
cout<<"b"<<b<<endl;
}
 
int main(){
test t1,t2,t3;
t1=test(30,40);
t2=test(10,20);
t3=t1-t2;
t1.disp();
t2.disp();
t3.disp();
return 0;
}
*/

