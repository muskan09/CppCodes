#include<iostream>
using namespace std;
//Write your code here
template <class so>
so sort(so str,so n){}
template <class sor>
sor sort(sor a,sor n){}

//-----------------------------------------------------------------------
int main()
{
int a[10],n,choice1,choice2,num1;
stringstr[100];
string s;
cin>>n;
cin.ignore();
for(int i=0;i<n;i++)
{
cin>>str[i];
cin.ignore();}
for(int i=0;i<n;i++)
{
cin>>a[i];}
cin>>choice1;
if(choice1==1)
{
cin>>choice2;
if(choice2==1)
sort(str,n);
else if(choice2==2)
sort(a,n);
else
cout<<"enter valid choice"<<endl;
}
else if(choice1==2)
{
cin>>choice2;
if(choice2==1)
{
cin>>s;
search(str,n,s);}
else if(choice2==2){
cin>>num1;
search(a,n,num1);
{
cin>>num1;
search(a,n,num1);
}}
else
cout<<"enter valid choice"<<endl;
return 0;
}
