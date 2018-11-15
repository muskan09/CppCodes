#include<iostream>
using namespace std;
int main(){
int arr[20],i,j,n,temp;
cout<<"size";
cin>>n;
for(i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
for(int j=0;j<(n-i-1);j++){
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
cout<<"output";
for(i=0;i<n;i++){
cout<<arr[i];
}
return 0;
}
