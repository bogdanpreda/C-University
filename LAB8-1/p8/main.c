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
int main()
{
    int m,n,i,k=0;

    printf("m= n=");
    scanf("%d %d",&m,&n);

    for(i=m;i<=n;i++)
    {
        if(prim(i))
            k++;
    }
    printf("in intervalul [%d,%d] sunt %d nr. prime",m,n,k);
    return 0;
}
