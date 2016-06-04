#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,ok=0;
    printf("n= k=");
    scanf("%d %d",&n,&k);

    while(n)
    {
        if(n%10==k)
        {
            ok=1;
            break;
        }
        n/=10;
    }
    if(ok)
        printf("DA");
    else
        printf("NU");
    return 0;
}
