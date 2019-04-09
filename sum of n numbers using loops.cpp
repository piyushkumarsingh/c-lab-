// write a program to print the sum of first 100 natural numbers using all types of loops

#include <iostream>
using namespace std;

// using for loop
int forLoop()
{
    int sum = 0;
    for(int i = 1;i<=100;i++)
        sum+=i;
    cout <<"\nThe sum of first 100 nums is: "<<sum;
    return 0;
}
// using while loop
int whileLoop()
{
    int sum = 0;
    int n = 1;
    while(n<=100)
    {
        sum+=n;
        n++;
    }
    cout <<"\nThe sum of first 100 nums is: "<<sum;
    return 0;
}

//using do while loop
int doWhileLoop()
{
    int sum = 0;
    int n = 1;
    do
    {
        sum+=n;
        n++;
    }while(n<=100);
    cout <<"\nThe sum of first 100 nums is: "<<sum;
    return 0;
}
int main()
{
    int choice;
    cout <<"\n1.To print the sum of natural nums using for loop";
    cout <<"\n2.To print the sum of natural nums using while loop";
    cout <<"\n3.To print the sum of natural nums using do while loop";
    cout <<"\nPlease select from the options: ";
    cin >> choice;
    switch (choice)
    {
        case 1: forLoop();
                break;
        case 2: whileLoop();
                break;
        case 3: doWhileLoop();
                break;

        default: cout<<"\nInvalid option";
    }
    return 0;
}
