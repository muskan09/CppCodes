#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream st;
st.open("file.txt",ios::out);
if(!st){
cout<<"file creation failed";
}
else{
cout<<"file created";
st<<"hello";
st.close();
}
return 0;
}
