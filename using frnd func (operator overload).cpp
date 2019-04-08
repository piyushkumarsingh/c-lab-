#include<iostream>
using namespace std;

class number
{
    int a,b;
public:
    number()
    {
        a=b=0;
    }
    number(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    friend number operator+( number ,number );
};

number operator+(number n, number m)
{
    number o;
    o.a=n.a+m.a;
    o.b=n.b+m.b;
    return o;
}
int main()
{
	
    number A(1,2) ,B(3,4), C;
    A.show();
    B.show();
    cout<<"---------------------------";
    C=A+B;
    C.show();
    return 0;
}

