#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,e;
    scanf("%d %d",&x,&y);
    if(x%3==0)
        e=2*x+3*y-13;
    else if(x%3==1)
        e = x*x-y;
    else
        e = x+y;
    printf("E=%d",e);
    return 0;
}
