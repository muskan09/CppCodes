#include<iostream>
using namespace std;
class data{
int **arr;
public:

data(){
for(int i=0;i<3;++i){

arr=new int*[3];
}
}
void get(){
for(int i=0;i<3;++i)
{
for(int j=0;j<3;++j){
cin>>arr[i][j];
}
}
}
void disp(){
for(int i=0;i<3;++i)
{
for(int j=0;j<3;++j){
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
}
~data(){
for(int i=0;i<3;++i){
delete []arr[i];
delete []arr;
}
}
};
int main(){
data d;
d.get();
d.disp();
return 0;
}

