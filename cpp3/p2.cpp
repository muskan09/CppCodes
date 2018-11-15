#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
try{
//-------------
if(b==0) throw b;
else 
	if(a<0||b<0) throw a;
else 
cout<<(float)a/b;
}
catch(int b){
cout<<"Division by zero";
}
catch(int a){
cout<<"Division is less than 1";
}
catch(double z){
double x;
x=a/b;
cout<<x;
}

//--------------
catch(...){
cout<<"EXCEPTION:UNKNOWN";
}
return 0;
}
