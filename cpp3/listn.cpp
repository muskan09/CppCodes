#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void showlist(list <int> m){
list <int>::iterator i;
list <int> x;
for(i=m.begin();i!=m.end();i++){
int s;
s=(*i)*2;
x.push_back(s);
}
cout<<"after doubling";
for(i=x.begin();i!=x.end();i++){
cout<<*i<<endl;
}
x.sort();
cout<<"min element"<<x.front()<<endl;
cout<<"max element"<<x.back()<<endl;
}

//Write your code here

int main() {
int n; //no. of elements
list<int> l;
cin>>n;
int num;
for(int i=0; i<n; i++)
{
cin>>num;
l.push_back(num); 
}
showlist(l);
return 0;
} 
