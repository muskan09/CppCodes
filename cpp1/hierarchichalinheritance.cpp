#include<iostream>
using namespace std;
class account{
protected:
int accnum;
public:
void getaccnum(){
cin>>accnum;
}
};
class savingaccount:public account{

};
class fixeddeposit:public account{

};
class currentaccount:public account{
};
class shortterm:public fixeddeposit{
};
class mediumterm:public fixeddeposit{
};
class longterm:public fixeddeposit{
};
int main(){
mediumterm m;

return 0;
}
