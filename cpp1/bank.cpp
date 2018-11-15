#include<iostream>
using namespace std;
class bank{
int x,y;
string depositor_name;
int accountno;
string type_account;
int account_balance;
public:
void intial_val(void);
void amount_deposit(void);
void withdraw(void);
void info_disp(void);
};
void bank::intial_val()
{
depositor_name="muskan";
accountno=546;
type_account="savings";
account_balance=100;
}
void bank::amount_deposit()
{
cout<<"enter amount to be deposited"<<endl;
cin>>y;
account_balance=account_balance+y;
cout<<"your total bank balance is:"<<account_balance;
}
void bank::withdraw()
{
cout<<"enter amount to be withdrawn"<<endl;
cin>>x;
if(account_balance>=10)
{
account_balance=account_balance-x;
}
else
cout<<"balance too low for withdrawing"<<endl;
}
void bank::info_disp()
{
cout<<"your bank info is"<<endl;
cout<<"depositor's name:"<<depositor_name<<endl;
cout<<"available balance:"<<account_balance<<endl;
}
int main()
{
int n;
class bank b;
b.initial_val();
cout<<"press 1 for deposit, press 2 for withdrawl, press 3 for account holder's info"<<endl;
cin>>n;
switch(n)
{
case 1: b.amount_deposit();
break;
case 2: b.withdraw();
break;
case 3: b.info_disp();
break;
}
return 0;
}
