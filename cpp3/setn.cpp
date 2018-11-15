#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
int n,a[50],t;
cin>>t;
cin>>n;
for(int i=0;i<t;i++)
{
for(int j=0;j<n;j++)
{
cin>>a[j];
}

}

int temp;
for(int i=0;i<n;i++){
for(int j=i+1;j<(n);j++){
  if(a[j]>a[i]){
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
set <int> s;
set <int>::iterator x;
for(int k=0;k<n;k++)
{
s.insert(a[k]);
}
cout<<"final"<<endl;
for(x=s.begin();x!=s.end();x++)
{
 cout<<*x<<endl;
}
cout<<"dup rem";
return 0;
}
