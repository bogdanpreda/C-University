#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int nr)
{
    if(nr<=1)
        return 1;
    else
        return nr*factorial(nr-1);
}
float t1(int i)
{
    return (1.0*i)/pow(i+1,2);

}
float t2(int i)
{
    float t = pow(-1,i+1)*(1.0/pow(i,2));
    return t;
}
float t3(int i)
{
    return 1.0/factorial(i);
}
int main()
{
    int i,n;
    float s;

    scanf("%d",&n);
    i=1;
    s=0;

    for(i=1;i<=n;i++)
    {
        s+=t1(i);
    }

    printf("suma 1 este %f\n",s);

    i=1;
    s=0;

    for(i=1;i<=n;i++)
    {
        s+=t2(i);
    }

    printf("suma 2 este %f\n",s);

    i=1;
    s=0;

    for(i=1;i<=n;i++)
    {
        s+=t3(i);
    }

    printf("suma 3 este %f\n",s);
    printf("\n");

    i=1;
    s=0;
    while(i<=n)
    {
        s+=t1(i);
        i++;
    }
    printf("suma 1 este %f\n",s);

    i=1;
    s=0;
    while(i<=n)
    {
        s+=t2(i);
        i++;
    }
    printf("suma 2 este %f\n",s);

    i=1;
    s=0;
    while(i<=n)
    {
        s+=t3(i);
        i++;
    }
    printf("suma 3 este %f\n",s);
    printf("\n");

    i=1;
    s=0;
    do
    {
        s+=t1(i);
        i++;
    }while(i<=n);
    printf("suma 1 este %f\n",s);

    i=1;
    s=0;
    do
    {
        s+=t2(i);
        i++;
    }while(i<=n);
    printf("suma 2 este %f\n",s);

    i=1;
    s=0;
    do
    {
        s+=t3(i);
        i++;
    }while(i<=n);

    printf("suma 3 este %f\n",s);

    return 0;
}
