#include<iostream>
#include<vector>
using namespace std;
int main(){
  int num;
  vector <int> vect;
  cout<<"Enter elements"<<endl;
  for(int i=0;i<10;i++){
    cin>>num;
    vect.push_back(num);
  }

vector <int> :: iterator itr = vect.begin();
vect.insert(itr + 4,1,25);
cout<<"After adding"<<endl;
for(int i=0;i<vect.size();i++){
  cout<<vect[i]<<endl;
}
vect.erase(vect.begin()+8);
vect.erase(itr+3,itr+5);
vect.pop_back();
return 0;
}
