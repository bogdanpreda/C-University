#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float delta = b*b-4*a*c;
    if(a==0)
        printf("ecuatie inexistenta");
    else
    {
        if(delta>0)
        {
            float x1 = -b+sqrt(delta)/2*a;
            float x2 = -b-sqrt(delta)/2*a;

            printf("x1=%f, x2=%f \n",x1,x2);
        }
        else if((int)delta==0)
        {
            float x = -b/2*a;

            printf("x=%f",x);
        }
        else
            printf("ecuatia nu are solutie");
    }
    return 0;
}
