#include<iostream>
#include<string.h>
using namespace std;
int count=0;
class data
{
	char *str;
	public:
	data(char *s)
	{
		str=new char;
		str=s;
	}	
	void show()
	{
		count++;
		cout<<"Data "<<count<<"="<<str<<endl;
	}
	void compare(data &d)
	{
		if(strcmp(str,d.str)==0)
		{
			cout<<"Both Objects have same text\n";
		}
		else
		{
			cout<<"Both Objects have different text\n";
		}
	}
	~data()
	{
		cout<<"Release memory allocated to "<<str<<endl;
	}
};
int main()
{
	data d1("obfuscation");
	data d2("obstruction");
	d1.show();
	d2.show();
	d1.compare(d2);	
	return 0;
}
