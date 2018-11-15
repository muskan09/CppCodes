#include<iostream>
using namespace std;

class bitOfficial{

public:

int idno;
char username[20];
int pw;
float litPresent, ethPresent, ripPresent;

//functions

void getdata(){
cout<<"*******Enter your official Id**********"<<endl;
cin>>idno;
cout<<"*******Enter username**********"<<endl;
cin.ignore();
cin.getline(username,20);
cout<<"*******Enter your password**********"<<endl;
cin>>pw;
void password();
}
void coinrate(){
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
coinrate();
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
float ammountToInvest;
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
int LitCoins,EthCoins,RipCoins;
void amount(){
cout<<"*******Enter amount to invest in bitcoins**********"<<endl;
cin>>ammountToInvest;
}
void getcoin(){
 cout << "**************** Please select any coin to continue *********************  \n"<<endl;;
    cout << "\n";
    cout << "|          Litecoin 1                  Etherum 2                  Ripple 3        |  \n";
    cout << "-----------------------------------------------------------------------  \n"<<endl;

    cout << "Enter coin code: ";
    cin>>coincode;
switch(coincode){
case 1: cout<<"Present rate of Litecoin is"<<(double)litPresent<<endl<<"Enter number of coins you want to buy"<<endl;
cin>>LitCoins;
break;
case 2: cout<<"Present rate of Etherum is"<<ethPresent<<endl<<"Enter number of coins you want to buy"<<endl;
cin>>EthCoins;
break;
case 3: cout<<"Present rate of Ripple is"<<ripPresent<<endl<<"Enter number of coins you want to buy"<<endl;
cin>>RipCoins;
break;
default: cout<<"Enter valid coin code"<<endl;
getcoin();
break;
}
}
};





int main(){
bitOfficial b;
b.getdata();
//b.password();
coin c;
c.getUserDetails();
c.amount();
c.getcoin();
return 0;


}
