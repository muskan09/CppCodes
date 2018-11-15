#include<iostream>
#include<fstream>
using namespace std;
int main(){
//reading from a file
fstream st;
st.open("file.txt",ios::in);
if(!st){
cout<<"no such file";
}
else{
char ch;
while(!st.eof()){
st>>ch;//extracting from a file
cout<<ch;
}
st.close();
}
return 0;
}
