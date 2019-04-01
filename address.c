#include<stdio.h>
 int main()
{
    int *p,a=6;
    char *q,b='a';
    float *r,c=3.5;
    p=&a;
    q=&b;
    r=&c;
    printf(" %d address is %u \n",*p,p);
    printf(" %c address is %u \n",*q,q);
    printf(" %f address is %u \n",*r,r);
    return 0;
}
