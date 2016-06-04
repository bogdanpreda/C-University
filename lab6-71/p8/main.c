#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr,i=0,maxim=0;
    printf("nr=");
    scanf("%d",&nr);
    while(nr)
    {
        if(maxim<nr%10){
            maxim = nr%10;
            i=1;
        }
        else if(maxim==nr%10)
            i++;
        nr/=10;
    }
    printf("maxim=%d aparitie=%d",maxim,i);
    return 0;
}
