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
cout<<"*******Enter your name**********"<<endl;
cin.ignore();
cin.getline(name,20);
cout<<"*******Enter your password**********"<<endl;
cin>>pass;
}


};

class coin: public user,public bitOfficial{
public:
int LitCoins;
int EthCoins;
int RipCoins;
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
coin::amount();
bitOfficial::coinrate(); 
retrial:
	
 cout << "**************** Please select any coin to continue *********************  \n"<<endl;;
    cout << "\n";
    cout << "|          Litecoin 1                  Etherum 2                  Ripple 3        |  \n";
    cout << "-----------------------------------------------------------------------  \n"<<endl;

    cout << "Enter coin code: ";
    cin>>coincode;
switch(coincode){
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
break;
}
}
void calculation(){
double a;
double b;


b=((LitCoins*litPresent )+ (EthCoins*ethPresent)+(RipCoins*ripPresent));
friend void operator-(coin& t){
t.b=-t.b;                                              
}

a = ((amountToInvest)+(b));
void display(){
ofstream file;
file.open("invoice.txt",ios::app);
file<<date<<endl;
file<<"current money in account"<<a<<endl;
file<<"No of litcoins"<<LitCoins<<endl;
file<<"No of Etherum"<<EthCoins<<endl;
file<<"No of Ripple"<<RipCoins<<endl;
cout<<"val of b is"<<b<<endl;
cout<<"current money in account"<<a<<endl;
cout<<"No of litcoins"<<LitCoins<<endl;
cout<<"No of Etherum"<<EthCoins<<endl;
cout<<"No of Ripple"<<RipCoins<<endl;
}
};
//class display::public coin{

	
//}





int main(){
bitOfficial b;
b.getdata();
//b.password();
coin c,o;
c.getUserDetails();
//c.amount();
c.getcoin();
-c;
c.calculation();
c.display();
return 0;


}
