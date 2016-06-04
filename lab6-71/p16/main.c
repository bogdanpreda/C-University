#include <stdio.h>
#include <stdlib.h>
#define ABS(a) (a<0)?-a:a

float t(int k)
{
    return (1*1.0)/pow((2*k+1),2);
}
int factorial(n)
{
    if(n==0) return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    float x1,x2,p,epsilon,s=0;
    int i;
    epsilon = 0.0001;
    x1=t(1);
    x2=t(2);

    printf("%f\n",x1);
    printf("%f\n",x2);
    i=3;

    p=x2-x1;
    if(p<0)
        p=(x2-x1)*(-1);

    printf("%f\n",p);
    s=x1+x2;
    while(p>=epsilon)
    {
        x1=x2;
        x2=t(i);
        i++;
        p=x2-x1;
        if(p<0)
            p=(x2-x1)*(-1);
        s+=x2;
    }
    printf("prima suma = %f\n",s);

    x1=(1*1.0)/factorial(1);
    x2=(1*1.0)/factorial(2);

    p=x2-x1;
    if(p<0)
        p=(x2-x1)*(-1);
    s=x1+x2;

    i=3;
    while(p>=epsilon)
    {
        x1=x2;
        x2=(1*1.0)/factorial(i);
        p=x2-x1;
        if(p<0)
            p=(x2-x1)*(-1);
        s+=x2;
        i++;
    }
    printf("a doua suma = %f\n",s);

    struct name
    {
        char numecomplet[40];
        unsigned int starecivila :1;
        char ssan[9];
    } as;
    as.starecivila = 1;

    printf("*%f",ABS(-0.07));
    return 0;
}
