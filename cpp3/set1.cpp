#include<iostream>
#include<set>
using namespace std;
int main(){
  set <int> s;
  set<int>::iterator i;
  cout<<"enter elements"<<endl;
  for(int i=1;i<5;i++){
    s.insert(i*10);
  }
  for(int i=0;i<10;i++){
    if(s.count(i)!=0){
      cout<<i<<"is an element in the set"<<endl;
    }
    else{
      cout<<i<<"is not an element in the set"<<endl;
    }
  }
  return 0;
}
