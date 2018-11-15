#include<iostream>
using namespace std;
class average
{
    float a,b,n;
    public:
    void cal(void);
    void disp(void);
};
void average::cal(void)
{
    cout<<"enter 2 nos";
    cin>>a>>b;
}
void average::disp(void)
{
    n=(a+b)/2;
    cout<<"the average is"<<n;
}
int main()
{
    average a1;
    a1.cal();
    a1.disp();
    return 0;
}
