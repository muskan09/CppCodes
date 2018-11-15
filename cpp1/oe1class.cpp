#include<iostream>
using namespace std;
class oe
{
    int n;
    public:
    void cal(void);
    void disp(void);
};
void oe::cal(void)
{
    cin>>n;
}
void oe::disp(void)
{
    if(n%2==0)
    {
        cout<<"its even";
    }
    else
    {
        cout<<"its odd";
    }
}
int main()
{
    oe a1;
    a1.cal();
    a1.disp();
    return 0;
}
