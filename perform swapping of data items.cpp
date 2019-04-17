//Write a C++ Program to perform the swapping of two data items of integer, floating point number and character type with the help of function overloading.

#include <iostream>
using namespace std;

void swap(int &m ,int &n)
{
    int temp;
    temp = m;
    m = n;
    n = temp;
}

void swap(float&m ,float &n)
{
    float temp;
    temp = m;
    m = n;
    n = temp;
}


void swap(char &m ,char &n)
{
    char temp;
    temp = m;
    m = n;
    n = temp;
}

int main()
{
        int n1,n2;

        cout<<"Enter two integers to be swapped  "<<endl;

        cin>>n1>>n2;
        cout<<" Two integers before swapping  "<<n1<<" & "<<n2<<endl;
        swap(n1,n2);
        cout<<" Two integers after swapping  "<<n1<<" & "<<n2<<endl;
        char c1,c2;
        cout<<"Enter two characters to be swapped  "<<endl;
        cin>>c1>>c2;
        cout<<" Two characters before swapping  "<<c1<<" & "<<c2<<endl;
        swap(c1,c2);
        cout<<" Two characters after swapping  "<<c1<<" & "<<c2<<endl;
        float f1,f2;
        cout<<"Enter two float values to be swapped  "<<endl;
        cin>>f1>>f2;
        cout<<" Two float values before swapping  "<<f1<<" & "<<f2<<endl;
        swap(f1,f2);
        cout<<" Two float values after swapping  "<<f1<<" & "<<f2<<endl;
}
