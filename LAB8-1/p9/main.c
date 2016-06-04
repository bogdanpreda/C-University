#include <stdio.h>
#include <stdlib.h>

int suma_c(int nr)
{
    int s=0;
    while(nr)
    {
        s+=nr%10;
        nr/=10;
    }
    return s;
}
int main()
{
    int m,n,i,sum=0;

    printf("m= n=");
    scanf("%d %d",&m,&n);

    for(i=m;i<=n;i++)
    {
        sum+=suma_c(i);
    }
    printf("suma cifrelor nr in intervalul [%d,%d]=%d",m,n,sum);
    return 0;
}
