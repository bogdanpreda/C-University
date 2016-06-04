#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,*p;
    a=50;
    p=&a;
    *p=60;
    printf("%d\n",a);
    return 0;
}
