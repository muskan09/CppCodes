#include<iostream>
using namespace std;
class fact
{
    int n,i,f=1;
    public:
    void cal(void);
    void disp(void);
};
void fact::cal(void)
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
}
void fact::disp(void)
{
   cout<<f;  
}
int main()
{
    fact a1;
    a1.cal();
    a1.disp();
    return 0;
}
