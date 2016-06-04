#include <stdio.h>
#include <stdlib.h>

int t(int n)
{
    int p=1,k;
    for(k=1;k<=n;k++)
    {
        p*=k;
    }
    return p;
}
int main()
{
    int n,s=0,i;
    printf("n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        s+=t(i);
    }
    printf("s=%d",s);
    return 0;
}
