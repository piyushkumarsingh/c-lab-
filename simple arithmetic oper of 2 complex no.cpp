//Write an OOP using C++ to perform simple arithmetic operations of two complex numbers using operator overloading

#include <iostream>
using namespace std;
class complex // this class give the a + b i value a real and b imaginary
{
	int real,img;
	public:
	complex()
	{
		real=0;
		img=0;
	}
	complex(float x,float y)
	{
		real=x;
		img=y;
	}
	complex(complex &c)
	{
		real=c.real;
		img=c.img;
	}
	complex operator+(complex c); // method overloading function prototype
	complex operator-(complex c);
	complex operator*(complex c);
	complex operator/(complex c);
	void print()
	{
		cout<<"Result= "<<real<<"+"<<img<<"i"<<endl;
	}

};
// method overloading function declaration
complex complex::operator-(complex c)
{
	complex tmp;
	tmp.real=real-c.real;
	tmp.img=img-c.img;
return tmp;
}
complex complex::operator+(complex c)
{
	complex tmp;
	tmp.real=real+c.real;
	tmp.img=img+c.img;
return tmp;
}
complex complex::operator*(complex c)
{
	complex tmp;
	tmp.real=((real*c.real)-(img*c.img));
	tmp.img=((real*c.img)+(img*c.real));
return tmp;
}
complex complex::operator/(complex c)
{
	complex tmp;
	tmp.real=((real*c.real)-(img*c.img))/((real*c.real)+(img*c.img));
	tmp.img=((real*c.img)+(img*c.real))/((real*c.real)+(img*c.img));
return tmp;
}
int main()
{
	complex c1(4,5),c2(2,3),c3,c4,c5,c6;
// call the function
	c3=c1.operator+(c2);
	c3.print();
	c4=c1.operator-(c2);
	c4.print();
	c5=c1.operator*(c2);
	c5.print();
	c6=c1.operator/(c2);
	c6.print();
}

