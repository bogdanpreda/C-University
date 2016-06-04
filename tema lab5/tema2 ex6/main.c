#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int e,x,y;
    scanf("%d %d",&x,&y);
    if(abs(x*y)==1)
        printf("expresia nu poate fi determinata");
    else
        e=(abs(x)+abs(y))/(1-abs(x*y));

    printf("e=%d",e);
    return 0;
}
