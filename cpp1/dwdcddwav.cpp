#include<iostream>
#include<cstring>
using namespace std;
int main (int argc,char *argv[])
{
	const char *s1=argv[1];
	const char *s2=argv[2];
	//cout<<s1<<s2<<endl;
	int x=0;
   const char *m = s1;
   while(m=strstr(m, s2))
      {
         x++;
         m++;
      }
      cout<<"occ "<<x<<endl;
    return 0;
}
