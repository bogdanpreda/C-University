#include <stdio.h>
#include <stdlib.h>
int factorial(int nr)
{
    if(nr==0 || nr==1)
        return 1;
    else
        return nr*factorial(nr-1);
}

int main()
{
    int nr;
    scanf("%d",&nr);
    printf("%d!=%d",nr,factorial(nr));
    return 0;
}
