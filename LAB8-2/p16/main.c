#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int patrat_perfect(int nr)
{
    if(sqrt(nr)==(int)sqrt(nr))
        return 1;
    return 0;
}
int main()
{
    int a,b,i;
    printf("a=b=");
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++)
    {
        if(patrat_perfect(i))
            printf("%d ",i);
    }
    return 0;
}
