#include <stdio.h>
#include <stdlib.h>

int produs1()
{
    int a,b,c,suma=0;
    printf("a=b=c=");
    scanf("%d %d %d",&a,&b,&c);

    suma = a+b+c;

    return suma;
}

void produs()
{
    int a,b,c,suma=0;
    printf("a=b=c=");
    scanf("%d %d %d",&a,&b,&c);

    suma = a+b+c;

    printf("suma = %d", suma);
}
int main()
{
    printf("suma=%d",produs1());
    produs();
    return 0;
}
