#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,r;
    scanf("%d %d",&a,&b);
    int maxim = (a>b)? a : b;
    int minim = (a<b) ? a : b;
    printf("maxim=%d minim=%d",maxim,minim);
    return 0;
}
