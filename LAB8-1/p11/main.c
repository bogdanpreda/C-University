#include <stdio.h>
#include <stdlib.h>

int prim(int nr)
{
    if(nr==0 || nr==1)
        return 0;
    else if(nr==2)
        return 1;
    else
    {
        int i;
        for(i=2;i<=nr/2;i++)
            if(nr%i==0)
                return 0;
    }
    return 1;
}
int invers(int nr)
{
    int invers=0;
    while(nr)
    {
        invers=invers*10+nr%10;
        nr/=10;
    }
    return invers;
}
int main()
{
    int a,b,i;

    printf("a= b=");
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++)
    {
        if(prim(i) && prim(invers(i)))
            printf("%d ",i);
    }
    return 0;
}
