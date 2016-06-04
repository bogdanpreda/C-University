#include <stdio.h>
#include <stdlib.h>

int prim(int nr)
{
    int i;
    if(nr<2)
        return 0;
    else if(nr==2)
        return 1;
    else
        for(i=3;i<=sqrt(nr);i++)
        {
            if(nr%i==0)
                return 0;
        }
    return 1;
}
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);

    if(prim(n))
        printf("numarul este prim");
    else
        printf("numarul nu este prim");
    return 0;
}
