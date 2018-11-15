#include<iostream>
using namespace std;
class person_data
{
	string name;
	int year;
	float height;
	int age;
	public:
	person_data(string n,int y,float h)
	{
		name=n;
		year=y;
		height=h;
	}
	void cal_age(int y)
	{
		age=y-year;
	}
	void cal_ht_cms()
	{
		height=height*100;
	}
	void show()
	{	
		cout<<"Approximate age of a person:"<<age<<endl;
		cout<<"Height in cms:"<<height<<endl;
	}
};	
int main()
{
	person_data p1("Ram",1975,1.05);
	p1.cal_age(2016);
	p1.cal_ht_cms();
	p1.show();
	return 0;
}
