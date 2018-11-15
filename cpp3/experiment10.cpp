#include<iostream>
using namespace std;
class TRIANGLE;
class RECTANGLE;
class SHAPE
{
	double l,b,area;
	public:
	void getdata()
	{
		cout<<"Enter length of side\n";
		cin>>l>>b;
	}
	void display_area()
	{
		cout<<area<<" square units"<<endl;
	}
	friend class TRIANGLE;
	friend class RECTANGLE;
};
class TRIANGLE
{
	public:
	void tri_area(SHAPE &s)
	{
		s.area=(s.l*s.b)/2;
	}
};	
class RECTANGLE
{
	public:
	void rect_area(SHAPE &s)
	{
		s.area=(s.l*s.b);
	}
};
int main()
{
	SHAPE s1,s2;
	TRIANGLE t;
	RECTANGLE r;
	s1.getdata();
	s2.getdata();
	t.tri_area(s1);
	cout<<"\nArea of triangle:-\n";
	s1.display_area();
	r.rect_area(s2);
	cout<<"\nArea of rectangle:-\n";
	s2.display_area();
	return 0;
}
5
#include<iostream>
using namespace std;
class COMPLEX
{
	float real,imag;
	public:
	void getdata()
	{	
		cin>>real>>imag;
	}
	void show()
	{
		cout<<real<<"+"<<imag<<"i\n\n";
	}
	friend COMPLEX add(COMPLEX,COMPLEX);
};
COMPLEX add(COMPLEX c1,COMPLEX c2)
{
	COMPLEX c;
	c.real=c1.real+c2.real;
	c.imag=c1.imag+c2.imag;
	return c;
}
int main()
{
	COMPLEX c1,c2,c3;
	c1.getdata();
	cout<<"Complex number 1:-\n";
	c1.show();
	c2.getdata();
	cout<<"Complex number 2:-\n";
	c2.show();
	c3=add(c1,c2);
	cout<<"Sum of complex number 1 and 2:-\n";	
	c3.show();
	return 0;
}

