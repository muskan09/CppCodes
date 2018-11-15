/*Write a program to calculate the age of a person and height in cms when year of birth and height in meters is known.
 Sample input-:

int main()

{

    person_data p1("Ram",1975,1.05);

    p1.cal_age(2016);

    p1.cal_ht_cms();

    p1.show();

    return 0;

}
Expected Output:
Approximate age of a person: 41

Age in cms: 105

*/
#include<iostream>

#include<string.h>

using namespace std;

class person_data

{

	char n[10];

	int y;

	float h;

	public:

	person_data(char a[10],int b,float c)
{
		strcpy(n,a);

		y=b;

		h=c;

	}

	void cal_age(int a)

	{

		y=a-y;

	}

	void cal_ht_cms()

	{

		h=1.05*100;

	}
	void show()
	{

		cout<<"Approximate Age of person is:"<<y<<"\n";

		cout<<"Height in cm is:"<<h;

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

