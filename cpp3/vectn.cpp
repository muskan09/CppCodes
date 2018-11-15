#include <iostream>
#include <vector>
using namespace std;

 void displaySum(vector <int> v)
{
vector <int> v1;
    vector <int>::iterator i;
int s=0;
if(v.size()!=1){
for(i=v.begin();i!=v.end();i++){
 //int s;
//s=(*i)+(*i+1);
//cout<<s;
cout<<*i;}
}
else
{ cout<<"no adj val";}


}

int main()
{
    vector<int> vec;
    int i, n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>i;
        vec.push_back(i);
    }
    displaySum(vec);
    return 0;
}
