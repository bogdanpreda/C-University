#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("a=b=");
    scanf("%d %d",&a,&b);
    int i,j;

    for(i=1;i<=a;i++)
    for(j=1;j<=b;j++)
    {
        if((float)i/j == (float)a/b)
            printf("%d/%d\n",i,j);
    }
    return 0;
}
