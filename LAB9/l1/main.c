#include <stdio.h>
#include <stdlib.h>

int minim(int a, int b)
{
    if(a<b)
        return a;
    return b;
}
int main()
{

    int n,i,a[50],b[50],c[50],d[50];
    printf("n=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("c[%d]=",i);
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++)
    {
        d[i]=minim((a[i]+b[i])/2,c[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",d[i]);
    }
    return 0;
}
