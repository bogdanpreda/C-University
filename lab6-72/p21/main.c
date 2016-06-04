#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n;
    do
    {
        printf("a= b=");
        scanf("%d %d",&a,&b);

    }while(a<=0 || b<=0 || b<=a);

    int i;
    for(i=a;i<=b;i++)
    {
        int p=1,k;
        for(k=1;k<=b-i;k++)
        {
            p*=(i-a);
        }
        printf("e=%d\n",p);
    }
    return 0;
}
