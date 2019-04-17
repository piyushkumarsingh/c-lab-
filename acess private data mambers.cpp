/*Write a C++ program to access the private data of a class by non-member function through friend function where the friend
function is declared: (a) in the location of public category, (b) in the location of private category, (c) within the scope of a class
definition itself, (d) defined with inline code subtraction.*/
#include <iostream>
using namespace std;

class Access
{   
    private:
              static  int a;
                friend int test(Access );
    public:
               friend int test1(Access );
               friend int test2(Access h)
               {
                   cout << h.a<<endl;
               }
};

int Access:: a;

int test(Access c)
{
    cout << c.a << endl;
}

int test1(Access b)
{
    cout << b.a << endl;
}
int main()
{
    Access obj;
    //Calling private data member function
    test(obj);
    //calling public data member function
    test1(obj);
    // within the scope of a class
    test2(obj);
} 
