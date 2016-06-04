#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    scanf("%f",&x);

    float p = 3.5*x*x-2.1*x+10.8;
    printf("p(%f)=%f\n",x,p);
    return 0;
}
