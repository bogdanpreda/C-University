#include <stdio.h>
#include <stdlib.h>
int factorial(int nr)
{
    int i,p=1;
    for(i=1;i<=nr;i++)
        p*=i;
    return p;
}
int main()
{
    int nr;
    scanf("%d",&nr);
    int exp=factorial(nr-1)+1;
    if(exp%nr==0)
        printf("Numarul %d este prim",nr);
    else
        printf("Numarul %d nu este prim",nr);
    return 0;
}
