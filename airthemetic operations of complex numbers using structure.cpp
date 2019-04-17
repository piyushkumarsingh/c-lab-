/*Write a Program to perform the following arithmetic operations of a complex number using astructure: (a) Addition of two
complex numbers, (b) Subtraction of two complex numbers, (c) Multiplication of two complex numbers, (d) Division of two
complex numbers.*/

#include <iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:
        Complex()
        {
            real = 0;
            imag = 0; 
        }

        Complex(int x, int  y)
        {
            real= x;
            imag= y;
        }

        Complex(Complex &obj)
        {
            real=obj.real;
            imag=obj.imag;
        }

        Complex add(Complex c)
        {
            Complex Add;
            Add.real = real + c.real;
            Add.imag = imag + c.imag;
            return Add; 
        }

        Complex sub(Complex c)
        {
            Complex Sub;
            Sub.real = real - c.real;
            Sub.imag = imag - c.imag;
            return Sub;
        }

        Complex mult(Complex c)
        {
            Complex Mult;
            Mult.real = real*c.real - imag*c.imag;
            Mult.imag = real*c.imag + imag*c.real;
            return Mult;
        }

        Complex div(Complex c)
        {
            Complex Div;
            Div.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
            Div.imag = (imag*c.real + real*c.imag)/(c.real*c.real + c.imag*c.imag);
            return Div;
        }

        void print()
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }

};

int main()
{
    Complex c1(4,5) ,c2(2,3),c3;
    cout <<"Addition of Two complex no is: ";
    c3 = c1.add(c2);
    c3.print();
    cout <<"Subtraction of Two complex no is: ";
    c3 = c1.sub(c2);
    c3.print();
    cout <<"Multiplication of Two complex no is: ";
    c3 = c1.mult(c2);
    c3.print();
    cout <<"Division of Two complex no is: ";
    c3 = c1.div(c2);
    c3.print();


}

