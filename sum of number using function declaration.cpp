//Write a Program to find sum of the following series using function declaration: Sum= x-(x)3/3!+(x)5/5!-………..(x)n/n!



#include <iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
 //function declaration

 int series()
 {  
     
    int i, n;
    float x, sum, t;
     
    cout<<" Enter the value for x : ";
    cin>>x;
     
    cout<<" Enter the value for n : ";
    cin>>n;
    
    x=x*3.14159/180;
    t=x;
    sum=x;
     
    /* Loop to calculate the value of Sine */
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    cout<<" The value of Sin("<<x<<") = "<<setprecision(4)<<sum;

    return 0;
 }
int main()
{   
    series();
    return 0;
}
