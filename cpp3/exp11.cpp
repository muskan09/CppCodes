#include<iostream>
using namespace std;
class complex
{
	float real;
	float imag;
	public:
	void getdata()
	{
		cout<<"Enter real and imaginary values of a complex number:-\n";
		cin>>real>>imag;
	}
	void addition(complex c1,complex c2)
	{
		real=c1.real+c2.real;
		imag=c1.imag+c2.imag;
	}
	void subtraction(complex c1,complex c2)
	{
		real=c1.real-c2.real;
		imag=c1.imag-c2.imag;
	}
	void multiplication(complex c1,complex c2)
	{
		real=(c1.real*c2.real)-(c1.imag*c2.imag);
		imag=(c1.real*c2.imag)+(c1.imag*c2.real);
	}
	void division(complex c1,complex c2)
	{
		real=((c1.real*c2.real)+(c1.imag*c2.imag))/((c2.real*c2.real)+(c2.imag*c2.imag));
		imag=((c1.imag*c2.real)-(c1.real*c2.imag))/((c2.real*c2.real)+(c2.imag*c2.imag));
	}
	void printf()
	{
		if(real==0)
		{
			cout<<imag<<"i"<<endl;
		}
		else
		{
			if(imag<0)
				cout<<real<<imag<<"i"<<endl;
			else
			{
				if(imag==0)
					cout<<real<<endl;
				else
					cout<<real<<"+"<<imag<<"i"<<endl;
			}
		}
	}
};
int main()
{
	complex c1,c2,res_c;
	c1.getdata();
	c2.getdata();
	res_c.addition(c1,c2);
	cout<<"\nAddition:\n";
	res_c.printf();
	res_c.subtraction(c1,c2);
	cout<<"\nSubtraction:\n";
	res_c.printf();
	res_c.multiplication(c1,c2);
	cout<<"\nMultiplication:\n";
	res_c.printf();
	res_c.division(c1,c2);
	cout<<"\nDivision:\n";
	res_c.printf();
	return 0;
}

