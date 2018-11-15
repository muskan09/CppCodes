#include<iostream>
using namespace std;
template <class a>
a sum(a ar[],a y){
int s=0;

for(int o=0;o<y;o++){
s=s+ar[o];
}
cout<<"sum is"<<s;

}
int main(){
int arr[20],n;
cout<<"enter size";
cin>>n;
cout<<"enter elements of array";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
sum(arr,n);

return 0;
}
