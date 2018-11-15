#include<iostream>
#include<set>
//#include<multiset>
using namespace std;
int main(){
  set <int> myset;
  set <int>::iterator ii=myset.begin();
  cout<<"enter elements of the set"<<endl;
  for(int i=1;i<=5;i++){
    myset.insert(i*10);
  }
  myset.insert(ii,25);
  myset.insert(ii,3);
  myset.insert(ii,25);
  int arr[]={5,10,15};
  myset.insert(arr,arr+3);



  return 0;
}
