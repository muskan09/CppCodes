#include<iostream>
using namespace std;
const int size=5;

class student

{

int roll_no;
int marks[size];//int marks[50];
public:
void getdata ();
void tot_marks ();
} ;

void student :: getdata ()
{
cout<<"\nEnter roll no: ";
Cin>>roll_no;
for(int i=0;i<size; i++)
{
cout<<"Enter marks in subject"<<(i+1)<<": ";
cin>>marks[i] ;
}

void student :: tot_marks() //calculating total marks
{
int total=0;
for(int i=0; i<size; i++)
total+ = marks[i];
cout<<"\n\nTotal marks "<<total;
}

int main()
student stu;
stu.getdata() ;
stu.tot_marks() ;
return 0;
}
