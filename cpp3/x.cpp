#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class student
{
protected:
int rollno;
char stu_name[30];
char course[15];
public:
student(int rno,char *n,char *c)
{
  rollno=rno;
  strcpy(stu_name,n);
  strcpy(course,c);
  cout<<"\nIn base class constructor";
}
  ~student()
  {
    cout<<"\nIn base class destructor";  
   }
    char* input_name()
    {
        return stu_name;
    }
    char *input_course()
    {
       return course; 
    }
    int input_rollno()
    {
        return rollno;
    }
};
class marks:public student
{
    protected:
    int mark[3];
    public:
    marks(int rno,char *n,char *c,int m1,int m2,int m3):student(rno,n,c)
    {
        mark[0]=m1;
        mark[1]=m2;
        mark[3]=m3;
     cout<<"\nIn marks class constructor";
    }
  ~marks()
  {
    cout<<"\nIn marks class destructor";
  }
    int total()
    {
        return(mark[0]+mark[1]+mark[3]);
    }
};
class result:public marks
{protected:
float percentage;
public:
result(int rno,char *n,char *c,int m1,int m2,int m3):marks(rno,n,c,m1,m2,m3)
{
    cout<<"\nIn derived class constructor";
}
~result()
{
    cout<<"\nIn derived class desructor";
}
void display()
{
    cout<<"\nRollno="<<input_rollno();
    cout<<"\nName="<<input_name();
    cout<<"\nCourse="<<input_course();
   
    cout<<"\nTotal marks="<<total();
    percentage=(total())/3.0;
    cout<<"\nPercentage="<<fixed<<setprecision(2)<<percentage;
    if(percentage>=60)
    cout<<"\nDivision=FIRST";
   else if(percentage>=50)
   cout<<"\nDivision=SECOND";
   else 
   cout<<"\nDivision=THIRD";
}
};
int main()
{
    int rollno,marks1,marks2,marks3;
    char name[30],course[30];
    cin>>rollno;
    cin.ignore();
    cin.getline(name,30);
    cin.getline(course,30);
    cin>>marks1>>marks2>>marks3;
    result r(rollno,name,course,marks1,marks2,marks3);
    r.display();
    return 0;
} 

