#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr,cpare=0,cimpare=0;
    printf("n=");
    scanf("%d",&nr);

    while(nr)
    {
        if(nr%10%2==0)
            cpare++;
        else
            cimpare++;
        nr/=10;
    }
    printf("cifre pare: %d\n",cpare);
    printf("cifre impare: %d",cimpare);
    return 0;
}
