#include <stdio.h>
#include <stdlib.h>

int putere(int x,int put)
{
    int i,p=1;
    for(i=1;i<=put;i++)
    {
        p*=x;
    }
    return p;
}
int main()
{
    int x,n;
    printf("x= n=");
    scanf("%d %d",&x,&n);
    if(n>0)
    {
        printf("%d",putere(x,n));
    } else
    {
        n*=-1;
        printf("%f",1.0/putere(x,n));
    }
    return 0;
}
