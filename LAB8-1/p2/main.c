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
    int nr,sum;
    printf("nr=");
    scanf("%d",&nr);

    sum = suma_cifre(nr);
    while(sum>10)
        sum = suma_cifre(sum);

    printf("Cifra de control este %d",sum);
    return 0;
}
