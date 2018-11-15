Implement parameterized constructor in MULTILEVEL INHERITANCE to display total marks,percentage,division of a student 
class student   (base class)
class marks (intermediate base class)
class result (derived class)
Also consider that a student secures first division if percentage is greater than or equal to 60
student secures second division if percentage is greater than or equal to 50
otherwise student secures third division
Use  setprecision as  cout<<"area="<<fixed<<setprecision(2)<<area to display percentage upto 2 decimal places
Sample input

12  //roll number
Anurag singh  //name 
CSE  // course
60 45 35   //marks of three subjects 

Sample output
In base class constructor                 
In marks class constructor
In derived class constructor
Rollno=12
Name=Anurag singh
Course=CSE
Total marks=140
Percentage=46.67
Division=THIRD
In derived class destructor
In marks class destructor
In base class destructor

Explanation

Sample input
First line is the rollno of the student.
Second line is the name of the student.
Third line is the course the student has opted for.
Fourth line represents the marks of three different subjects.

