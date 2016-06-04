#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int maxim = (a>b)? (a>c) ? a:c : (b>c) ? b:c;
    printf("maxim=%d ",maxim);
    return 0;
}
