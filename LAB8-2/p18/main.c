#include <stdio.h>
#include <stdlib.h>

int suma_cifre(int nr)
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
    int n,nr,i;
    printf("n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("nr=");
        scanf("%d",&nr);

        if(suma_cifre(nr)==i)
            printf("%d\n",i);
    }

    return 0;
}
