#include<iostream>
#include<string>
using namespace std;
class concat{
string s="muskan";
public:
concat(string a)
{
s=s+a;
}
void show()
{
cout<<s;
}
};
int main(){
string s2;
cin>>s2;
concat s1(s2);
s1.show();
return 0;
}

