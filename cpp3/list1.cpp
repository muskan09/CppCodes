#include<iostream>
#include<list>
using namespace std;
int main(){
  int num;
  list <int> l1;
  list <int> l2;
  cout<<"Enter elments in list"<<endl;
  for(int i=0;i<5;i++){
    cin>>num;
    l1.push_back(num);
    }
    for(int i=0;i<5;i++){
      cin>>num;
      l2.push_back(num);
    }
    list <int> :: iterator itr;
    for(itr=l1.begin();itr!=l1.end();itr++){
      cout<<*itr<<endl;
    }
    l1.reverse();
    l2.sort();
    cout<<"merge l2 into l1";
    l1.merge(l2);
    for(itr=l1.begin();itr!=l1.end();itr++){
      cout<<*itr<<endl;
    }
    return 0;

}
