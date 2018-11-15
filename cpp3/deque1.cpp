#include<iostream>
#include<deque>
using namespace std;
int main(){
  int num;
  deque <int> deq;
  cout<<"enter elements in deque"<<endl;
  for(int i=0; i<5;i++){
    cin>>num;
    deq.push_back(num);
    cin>>num;
    deq.push_front(num);
  }
  cout<<"the contents of deque are"<<endl;
  for(int i=0;i<deq.size();i++){
    cout<<deq[i]<<" ";
    cout<<endl;
  }
  return 0;
}
