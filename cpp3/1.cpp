#include<iostream>
#include<cstring>
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
/*-------------------------------------*/
rollno=rno;
strcpy(stuname,n);
strcpy(course,n);
cout<<"In base class constructor"<<endl;
}
~student(){
cout<<"In base class destructor"<<endl;
}
/*-------------------------------------*/
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
