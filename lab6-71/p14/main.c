#include <stdio.h>
#include <stdlib.h>

int prim(int nr)
{
    int i;
    if(nr<2)
        return 0;
    else if(nr==2)
        return 1;
    else
        for(i=2;i<=sqrt(nr);i++)
        {
            if(nr%i==0)
                return 0;
        }
    return 1;
}
int main()
{
    int min,max,i,diviz;

    do
    {
        printf("min= max=");
        scanf("%d %d",&min,&max);
        printf("divizibil cu=");
        scanf("%d",&diviz);

    } while(min>max);

    for(i=min;i<=max;i++)
    {
        if(prim(i))
            printf("%d ",i) ;
    }

    printf("\n");
   for(i=min;i<=max;i++)
    {
        if(i%diviz==0)
            printf("%d e divizibil cu %d \n",i,diviz);
    }

    return 0;
}
