//Write a Program to exchange the contents of two variables by using (a)Call by value, (b)Call by reference.


#include <iostream>
using namespace std;


void swap(int n1, int n2) 
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap1(int& n1, int& n2) 
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int value()
{
    int a, b,temp;
    
    cout<<"enter the numbers for swapping";
    cin>>a>>b;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swap(a,b);
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

}

int refer()
{
    int a, b;
    
    cout<<"enter the numbers for swapping";
    cin>>a>>b;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swap1(a, b);

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

}
int main()
{
    int choice;
    cout <<"\n1.Call by value";
    cout <<"\n2.Call by referrence";
    cout <<"\nChoose your option:";
    cin >> choice;
    switch (choice)
    {
        case 1: value();
                break;
        case 2: refer();
                break;

        default : cout<<"\n Invalid option";
    }
}
