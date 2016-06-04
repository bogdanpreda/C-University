#include <stdio.h>
#include <stdlib.h>
#define N 20;

void citire(int &n, int v)
{
    printf("n=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }
}
int main()
{

    int n,i,v[N];

    citire(n,v);
    for(i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    return 0;
}
