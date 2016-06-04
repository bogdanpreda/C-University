#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d=2,p=0;
    printf("n=");
    scanf("%d",&n);

    while(n>=d)
    {
        p=0;
        while(n%d==0)
        {
            n=n/d;
            p++;
        }

        if(p)
            printf("%d^%d\n",d,p);

        d++;
    }
    return 0;
}

