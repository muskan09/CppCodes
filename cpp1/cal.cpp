#include<iostream>
using namespace std;
int main()
{
  float x,y,i,a,s,m,d;
  cin>>x>>y>>i;
  if(i==1)
  {
      a=x+y;
      cout<<a;
  }
  else if(i==2)
    {
        s=x-y;
        cout<<s;
    }
    else if(i==3)
    {
        m=x*y;
        cout<<m;
    }
    else
    {
        d=x/y;
        cout<<d;
    }
    return 0;
}
