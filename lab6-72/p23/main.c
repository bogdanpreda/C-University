#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,invers=0;
    printf("n=");
    scanf("%d",&n);
    while(n)
    {
        invers=invers*10+n%10;
        n/=10;
    }
    printf("oglinditul este %d",invers);
    return 0;
}
