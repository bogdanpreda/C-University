#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,s,i,n;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("a= b= c=");
        scanf("%d %d %d",&a,&b,&c);

        if((float)(a+b)/2 == (float)c)
            printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
