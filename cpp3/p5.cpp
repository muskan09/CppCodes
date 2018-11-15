/*Write Program to demonstrate use of constructors and destructors for 
performing dynamic operations
Expected output:

Data 1= Obfuscation

Data 2= Obstruction

Both Objects have different text

Release memory allocated to Obfuscation

Release memory allocated to Obstruction
*/
#include<iostream>
#include<string.h>

using namespace std;

class data

{ char n[15];

	public:

	data(char a[15])

	{

		strcpy(n,a);

	}

	void show()

	{

		cout<<"Data="<<n<<endl;

	}

	void compare(data d2)

	{

		if(strcmp(n,d2.n)==1)

		  cout<<"Same"<<endl;

		else

		cout<<"Both objects have Different Text"<<endl;
}
	~data()

	{

		cout<<"Release Memory Allocated to "<<n<<endl;

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


