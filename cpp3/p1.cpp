#include<iostream>
using namespace std;
void test(int x){
try{
if(x==1)throw x;//int
else
	if(x==0) throw 'x';//char
else
	if(x==-1)throw 1.0;//double
cout<<"End of try block \n";
}
catch(char c){
cout<<"character";
}
catch(int m){
cout<<"integer";
}
catch(double d){
cout<<"double";
}
cout<<"end of try catch system";
}
int main(){
test(1);
return 0;
}
