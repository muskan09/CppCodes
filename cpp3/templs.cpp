#include<iostream>
using namespace std;
template<class a>
a linearsearch(a ar[],a size,a num){
int c=0;
int pos;
for(int j=0;j<size;j++){
if(ar[j]==num){
c=1;
pos=j+1;
break;
}
}
if(c==0){
cout<<"num not found";
}
else{
cout<<num<<"found at"<<pos;
}
}
int main(){
int i,arr[20],n,x;
cout<<"n";
cin>>n;
for(i=0;i<n;i++){
cin>>arr[i];
}
cout<<"enter number to search";
cin>>x;
linearsearch(arr,n,x);
return 0;
}
