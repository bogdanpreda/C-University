#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,delta;
    printf("a, b, c=");
    scanf("%f %f %f", &a,&b,&c);

    if(a!=0)
    {
        delta = b*b-4*a*c;
        if(delta>0)
        {
            float x1 =(-b+sqrt(delta))/(2*a);
            float x2 =(-b-sqrt(delta))/(2*a);
            printf("x1=%f,x2=%f",x1,x2);
        }
        else if(!delta)
        {
            float x = -b/(2*a);
            printf("x1=x2=%f",x);
        }
        else if(delta<0)
        {
            printf("ecuatia nu are solutie");
        }
    } else
        printf("ecuatie inexistenta");

    return 0;
}
