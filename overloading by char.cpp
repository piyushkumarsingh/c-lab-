#include <iostream>
using namespace std;
class A 
{
  public:
     int i;
     char b[10];
     char c[10];
     void input()
     {
      cout<<"enter the name of boy"; 
     cin>>c;
    cout<<"enter the name of girl";
     cin>>b;
     }
     void boy(char x[])
   {
       cout<<"Name of Boy \n";
       
       cout<<x;
   }
   
    void boy(char x[],char y[])
   {
      cout<<"\n Name of boy and girl \n";
      
      cout<<x<<" "<<y;
   }
   
};
   
   int main()
   {
       A obj;
       obj.input();
       obj.boy(obj.c);
       obj.boy(obj.c,obj.b);
       return 0;
   }
