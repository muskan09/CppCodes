#include"iostream.h"
#include"conio.h"
#include"stdio.h"
#include"string.h"
class string
{
 char *str;
 int len;
 public:
 string()
 {
  len=0;
  str=new char[len+1];
 }
 string(char *s)
 {
  len=strlen(s);
  str=new char[len+1];
  strcpy(str,s);
 }
 string join(string &a,string &b)
 {
  string c;
  c.len=a.len+b.len;
delete c.str;
  c.str=new char[c.len+1];
  strcpy(c.str,a.str);
  strcat(c.str,b.str);
  return c;
 }
 void display()
 {
  cout<<str;
 cout<<endl;
 }
};
int main()
{
 string x,y,z;
 char *st1,*st2;
 clrscr();
 x=string("HELLO");
 y=string("WORLD");
 z.join(x,y);
 z.display();
 getch();
 return 0;}
#include<conio.h>
#include<string.h>
#include<iostream.h>
 
class string {
    public:
    char *s;
    int size;
    void getstring(char *str)
    {
        size = strlen(str);
        s = new char[size];
        strcpy(s,str);
    }
 
    void operator+(string);
};
 
void string::operator+(string ob)
{
    size = size+ob.size;
    s = new char[size];
    strcat(s,ob.s);
    cout<<"\nConcatnated String is: "<<s;
}
 
void main()
{
    string ob1, ob2;
    char *string1, *string2;
    clrscr();
 cout<<"\nEnter First String:";
    cin>>string1;
 
    ob1.getstring(string1);
 
    cout<<"\nEnter Second String:";
    cin>>string2;
 
    ob2.getstring(string2);
 
    //Calling + operator to Join/Concatenate strings
    ob1+ob2;
    getch();
}

#include<iostream>
#include<string>
using namespace std;
class string{
char *s;
int size;
public:
void getstring(char *str)
    {
        size = strlen(str);
        s = new char[size];
        strcpy(s,str);
    }
 
    void operator(string);

};
void string::operator(string ob)
{
    size = size+ob.size;
    s = new char[size];
    strcat(s,ob.s);
    cout<<"\nConcatnated String is: "<<s;
}
 
void main()
{
    string ob1, ob2;
    char *string1, *string2;
    clrscr();
 cout<<"\nEnter First String:";
    cin>>string1;
 
    ob1.getstring(string1);
 
    cout<<"\nEnter Second String:";
    cin>>string2;
 
    ob2.getstring(string2);
    ob1+ob2;
    return 0;
}


