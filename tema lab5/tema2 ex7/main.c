#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=0 &&b>=0 &&c>=0)
        printf("a b c au acelasi semn");
    else
        printf("a b c nu au acelasi semn");
    return 0;
}
