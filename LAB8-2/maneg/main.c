#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr;
    int sum=0,i=0;
    do{

        scanf("%d",&nr);
        if(nr)
        {
        sum+=nr;
        i++;
        }
    } while(nr);

    float ma=(float)sum/i;
    printf("ma=%f",ma);
    return 0;
}
