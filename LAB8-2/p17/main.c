#include <stdio.h>
#include <stdlib.h>

int nr_perfect(int nr)
{
    int s=0,i;
    for(i=1;i<=nr/2;i++)
    {
        if(nr%i==0)
            s+=i;
    }
    if(s==nr)
        return 1;

    return 0;
}
int main()
{
    int n,j;
    scanf("%d",&n);

    for(j=1;j<=n;j++)
    {
        if(nr_perfect(j))
            printf("%d ",j);
    }
    return 0;
}
