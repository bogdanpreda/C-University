#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr,ok=1;
    printf("nr=");
    scanf("%d",&nr);

    while(nr)
    {
        if(nr%10<nr/10%10)
        {
            ok=0;
            break;
        }
    nr/=10;
    }
     if(ok)
            printf("DA");
        else
            printf("NU");

    return 0;
}
