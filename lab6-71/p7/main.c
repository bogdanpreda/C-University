#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr,suma,i;
    printf("nr=");
    scanf("%d",&nr);
    suma=0;
    for(i=1;i<=nr;i++)
    {
        if(i%3==0)
            //printf("%d ",i);
            suma+=i;
    }
    printf("suma=%d",suma);
    return 0;
}
