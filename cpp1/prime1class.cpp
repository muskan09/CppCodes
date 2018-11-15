#include<iostream>
using namespace std;
class prime
{
    int n,c=0,i,r;
    public:
    void cal(void);
    void disp(void);
};
void prime::cal(void)
{
   cin>>n;
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r=0)
        {
            c++;
        }
    }
}
void prime::disp(void)
{
    
    if(c==2)
    {
        cout<<"its prime";
    }
    else
        cout<<"not prime";
}
int main()
{
    prime a1;
    a1.cal();
    a1.disp();
    return 0;
}
