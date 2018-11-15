#include<iostream>
#include<vector>
using namespace std;
bool isEven(int number){
return((number%2) == 0);
}
int main(){
  int num,c=0;
  vector <int> vect;
  cout<<"Enter elements"<<endl;
  for(int i=0;i<4;i++){
    cin>>num;
if(isEven(num)==1){
    //vect.push_back(num);
c++;
  }
}
/*for(int i=0;i<vect.size();i++){
if(isEven(num)){
    //vect.push_back(num);
c++;
  }
}*/
cout<<"the count is"<<c;
return 0;
}
