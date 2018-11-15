#include<iostream>
#include<vector>
#include<deque>
#include<list>
using namespace std;
int main(){
  int nu;
  vector <int> vect;
  vector <int> vec;
  cout<<"Enter elements"<<endl;
  for(int i=0;i<10;i++){
    cin>>nu;
    vect.push_back(nu);
  }
  for(int i=10;i>=0;i--){
    cout<<vect[i]<<endl;
  }
  int num;
  deque <int> deq;
  cout<<"enter elements in deque"<<endl;
  for(int i=0; i<5;i++){
    cin>>num;
    deq.push_back(num);
    cin>>num;
    deq.push_front(num);
  }
  deque <int> ::reverse_iterator itr;
  cout<<"after reversing";
  for(itr=deq.rbegin();itr!=deq.rend();itr++){
    cout<<*itr;
  }
  int n;
  list <int> l1;
  cout<<"Enter elments in list"<<endl;
  for(int i=0;i<5;i++){
    cin>>n;
    l1.push_back(n);
    }
    l1.reverse();
      list <int> :: iterator itr;
      cout<<"reverse elements of list are"<<endl;
    for(itr=l1.begin();itr!=l1.end();itr++){
      cout<<*itr<<endl;

    for(int i=0;i<5;i++){
      cout<<i<<"is an element"<<endl;
    }

  return 0;
}
