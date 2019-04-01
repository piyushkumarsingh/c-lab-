#include <iostream>
using namespace std;
class A 
{
  public:
    
     int a,b,c;
     void input()
     {
     	cout<<"enter the radius of circle";
        cin>>a;
        cout<<"enter the sides of rectangle";
        cin>>b>>c;
     
     }
     void area(int a)
   {
       cout<<"area of circle \n";
       cout<<3.14*a*a;
   }
   
    void area(int b,int c)
   {
       cout<<"\n area of rectangle \n";
       cout<<b*c;
   }
   
};
   
   int main()
   {
       A obj;
       obj.input();
       obj.area(obj.a);
       obj.area(obj.b,obj.c);
       return 0;
   }
