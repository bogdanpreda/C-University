#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,p;
    printf("a=b=c=");
    scanf("%d %d %d", &a,&b,&c);

    p=a+b+c;
    printf("perimetrul este:%d\n",p);
    float sp=p/2.0;
    float aria = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("aria este:%f\n",aria);
    return 0;
}
