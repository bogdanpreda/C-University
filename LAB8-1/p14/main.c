#include <stdio.h>
#include <stdlib.h>

int invers(int nr)
{
    int invers=0;
    while(nr)
    {
        invers = invers*10+nr%10;
        nr/=10;
    }
    return invers;
}
int main()
{
    int nr;
    scanf("%d",&nr);

    nr= invers(invers(nr)/10);

    printf("nr=%d",nr);
    return 0;
}
