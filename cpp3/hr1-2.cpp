#include<iostream>
using namespace std;

class employee


{


protected:


int id;


char name[20];


char des[20];


public:


void get_emp_data();


void show_emp_data();


};


//STUDENT CODE HERE
class contract:public employee{

};
class permanent:public employee{

};


int main()


{


contract c;


c.get_cont_data();


permanent p;


p.get_per_data();


c.show_cont_data();


p.show_per_data();


return 0;


}
