#include<iostream>

using namespace std;
class frnd
{

    int a;
public:
    void input()
    {

        cin>>a;
    }
    friend void average(frnd A, frnd B, frnd C);
};
void average (frnd A, frnd B, frnd C)
{

    int avg;
    avg=(A.a+B.a+C.a)/3;
    cout<<"average ="<<avg<<"\n";
}
int main()
{
    frnd A,B,C;
    A.input();
    B.input();
    C.input();
    average(A,B,C);
    return 0;
}


