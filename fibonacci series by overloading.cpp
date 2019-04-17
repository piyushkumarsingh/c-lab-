//Write a C++ program to generate a Fibonacci series by overloading: (a) Prefix Operator, (b) Postfix Operator.
#include <iostream>
using namespace std;

class fibo
{
    int a , b , c;
    public:
        fibo()
        {
            a = 0;
            b = 1;
            c = a + b;
        }

        fibo operator++ (int x)
        {
            a = b;
            b = c;
            c = a + b;
            return *this;
        }

        void display()
        {
            cout << c << "\t";
        }
};

int main()
{
    fibo obj;
    int n;
    cout <<"\nHow many fibonacci nos to be displayed?"<<endl;
    cin >> n;
    for (int i = 0;i< n; i++)
    {
        obj.display();
        obj++;
    }
    return 0;
} 
