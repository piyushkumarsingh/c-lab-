//Write a Program to read the number and to display the largest  number among them

#include <iostream>
using namespace std;

//Largest between two nums
int twoNum()
{
    int a,b;
    cout<<"\nEnter two numbers:";
    cin >> a >> b;
    int ans = a>b?a:b;
    cout << "\nThe largest between two nums is:"<< ans;
    return 0;
}

//Largest between three nums
int threeNum()
{
    int a,b,c;
    cout<<"\nEnter three numbers:";
    cin >> a >> b >> c;
    int ans = (a>b && a>c)?a:(b>c)?b:c;
    cout << "\nThe largest between three nums is:"<< ans;
    return 0;
}

//Largest between four nums

int fourNum()
{
    int a,b,c,d;
    cout<<"\nEnter four numbers:";
    cin >> a >> b >> c >> d;
    int ans = (a>b && a>c && a>d)?a:(b>c && b>d)?b:(c>d)?c:d;
    cout << "\nThe largest between four nums is:"<< ans;
    return 0;
}

int main()
{
    int choice;
    cout <<"\n1.To display largest numbers between two numbers:";
    cout <<"\n2.To display largest numbers between three numbers:";
    cout <<"\n3.To display largest numbers between four numbers:";
    cout << "\nPlease select from the options: ";
    cin >> choice;
    switch (choice)
    {
        case 1: twoNum();
                break;
        case 2: threeNum();
                break;
        case 3: fourNum();
                break;

        default: cout << "\n Invalid option entered.";      
    }
    return 0;
}

