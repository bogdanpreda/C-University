#include <stdio.h>
#include <stdlib.h>

int fibonacci(int nr)
{
    int a,b,c=0;
    a=0;
    b=1;
    if(nr==a || nr==b)
        return 1;
    else
    {
        while(c!=nr && c<=nr)
        {
            c=a+b;
            if(c==nr)
            {
                return 1;
            }
            a=b;
            b=c;
        }
    }
    return 0;

}
    int main()
    {
        int a,b,i;

        printf("a= b=");
        scanf("%d %d",&a,&b);

        for(i=a; i<=b; i++)
        {
            if(fibonacci(i))
                printf("%d ",i);
        }
        return 0;
    }
