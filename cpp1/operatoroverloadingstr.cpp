#include <iostream>
#include <cstring>

using namespace std;



class overstring

{

	char string1[20];

public:

	overstring(){}

	overstring(char *x){

		strcpy(string1,x);

	}

	void display(){

		cout << string1 << endl;

	}

	overstring operator+(overstring s2){

		overstring s;

		strcpy(s.string1,string1);

		strcat(s.string1,s2.string1);

		return s;

	}

	int operator==(overstring s2){
return(!(strcmp(string1,s2.string1)));
	}

	int operator>(overstring s2){

		if(strcmp(string1,s2.string1)>0)

			return 1;

		else

			return 0;

	}

	int operator<(overstring s2){

		if(strcmp(string1,s2.string1)<0)

			return 1;

		else

			return 0;

	}

};



int main(void){

	overstring s1("program"),s2("program");

	if(s1 == s2)

		cout <<"Equal"<< endl;

	else

		cout <<"Not Equal"<< endl;
overstring s3("zzzzzz"),s4("program");
	if(s3 > s4)

		cout <<"Greater"<< endl;

	else

		cout <<"Not Equal"<< endl;
overstring s5;
	s5 = s1+s3;

	s5.display();

}

