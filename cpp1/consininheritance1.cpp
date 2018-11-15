#include<iostream>
using namespace std;
class oops{
protected:
int m;
public:
oops(int p){
m=p;
cout<<"constructor of oops called"<<endl;
}
};
class result:public oops{
protected:
int z;
public:
result(int x,int y):oops(a){ 
//earlier (int x,int y):oops(a),z(b) is called as initializer list but now after z=b it becomes a proper constructor
z=b;
cout<<"constructor of result called";
}
};
int main(){
result r;
r(10,20);
return 0;
}
