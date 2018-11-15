#include<iostream>
#include<fstream>
using namespace std;

class bitOfficial{

public:

int idno;
char username[20];
int pw;
double litPresent, ethPresent, ripPresent;
string date;
//functions

void getdata(){
cout<<"official login"<<endl;
cout<<"*******Enter your official Id**********"<<endl;
cin>>idno;
cout<<"*******Enter username**********"<<endl;
cin.ignore();
cin.getline(username,20);
cout<<"*******Enter your password**********"<<endl;
cin>>pw;
password();

}
void coinrate(){
cout<<"official"<<endl;

cout<<"Enter the date of transaction"<<endl;
cin>>date;
cout<<"*******Enter this morning's coin rates for LITECOIN**********"<<endl;
cin>>litPresent;
cout<<"*******Enter this morning's coin rates for ETHERUM**********"<<endl;
cin>>ethPresent;
cout<<"*******Enter this morning's coin rates for RIPPLE**********"<<endl;
cin>>ripPresent;
}

void password(){
int press;
if(pw==12345){
cout<<"*******Password verified**********"<<endl;
//coinrate();
}
else{cout<<"*******Invalid password! Press one to Try Again!**********"<<endl;
cin>>press;
if(press==1)
{getdata();
}
else{cout<<"You are now logged out!"<<endl;}}
}

};

class user{
    public:
    char name[20];
double amountToInvest;
int coincode;
int pass;

void getUserDetails(){
cout<<"User login"<<endl;
cout<<"*******Enter your name**********"<<endl;
cin.ignore();
cin.getline(name,20);
cout<<"*******Enter your password**********"<<endl;
cin>>pass;
}
virtual void show()=0;

};

class coin: public user,public bitOfficial{
public:
  int LitCoins;
  int EthCoins;
  int RipCoins;
  double b;
  double a;
coin(){

LitCoins=0;
EthCoins=0;
RipCoins=0;
}
void amount(){
cout<<"*******Enter amount to invest in bitcoins**********"<<endl;
cin>>amountToInvest;
}
void getcoin(){

bitOfficial::coinrate();
coin::amount();
retrial:

 cout << "**************** Please select any coin to continue *********************  \n"<<endl;;
    cout << "\n";
    cout << "|          Litecoin 1                  Etherum 2                  Ripple 3        |  \n";
    cout << "-----------------------------------------------------------------------  \n"<<endl;

    cout << "Enter coin code: ";
    cin>>coincode;
switch(coincode)
{
case 1: cout<<"Present rate of Litecoin is"<<litPresent<<endl<<"Enter number of coins you want to buy"<<endl;
cin>>LitCoins;

if((LitCoins*litPresent) > amountToInvest){cout<<"Not enough money"<<endl;}
break;
case 2: cout<<"Present rate of Etherum is"<<ethPresent<<endl<<"Enter number of coins you want to buy"<<endl;
cin>>EthCoins;
if((EthCoins*ethPresent) > amountToInvest){cout<<"Not enough money"<<endl;}
break;
case 3: cout<<"Present rate of Ripple is"<<ripPresent<<endl<<"Enter number of coins you want to buy"<<endl;
cin>>RipCoins;
if((RipCoins*ripPresent) > amountToInvest){cout<<"Not enough money"<<endl;}
break;
default: cout<<"Enter valid coin code"<<endl;
goto retrial;
}


b=((LitCoins*litPresent )+(EthCoins*ethPresent)+(RipCoins*ripPresent));
}
coin operator-(coin& t)
{
coin e;

e.b=-t.b;
return e;
}

void calculation()
{
a = ((amountToInvest)-(b));
if(a<0){a=amountToInvest;}
//a = ((amountToInvest)-(b));
ofstream file;
file.open("invoice.txt",ios::app);
file<<"Date:"<<date<<endl;
file<<"Name:"<<name<<endl;
file<<"Current money in account:"<<a<<endl;
file<<"No of litcoins:"<<LitCoins<<endl;
file<<"No of Etherum:"<<EthCoins<<endl;
file<<"No of Ripple:"<<RipCoins<<endl;
file<<"****************"<<endl;
//cout<<"val of b is"<<b<<endl;
cout<<"Current money in account:"<<a<<endl;
cout<<"No of litcoins:"<<LitCoins<<endl;
cout<<"No of Etherum:"<<EthCoins<<endl;
cout<<"No of Ripple"<<RipCoins<<endl;
}

void show(){
cout<<"Transaction has been made!";}

};


int main()
{
int p;
cout<<"Press 1 to continue:"<<endl;
cin>>p;
while(p==1){

bitOfficial b;
b.getdata();

coin c,*c1;
c1=&c;
c1->getUserDetails();

c1->getcoin();

c1->calculation();

c1->show();
cout<<"Press 1 to continue:"<<endl;
cin>>p;
}
return 0;
};


