// program to compares two strings by == operator


#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Compare
{
    public:
        char s[20];
        void getString(char str[])
        {
            strcpy(s,str);
        }
        void operator == (Compare obj)
        {
            if (strcmp(s,obj.s)==0)
                cout <<"\nStrings are equal";
            else
                cout <<"\nStrings are not equal";
        }
};

int main()
{
    Compare obj,obj1;
    char string[20],string1[20];
    cout <<"\nEnter first string: ";
    cin >> string;
    obj.getString(string);
    cout <<"\nEnter second string: ";
    cin >> string1;
    obj1.getString(string1);
    //comparing two strings
    obj == obj1;
    return 0;

}
