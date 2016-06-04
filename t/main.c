#include <stdio.h>
#include <stdlib.h>

int prim(int nr)
{
    int i;
    if(nr<=1)
        return 0;
    else if(nr==2)
        return 1;
    else
    {
        for(i=2;i<=sqrt(nr);i++)
        {
            if(nr%i == 0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int numar;
    FILE * f;
    f = fopen("numere.txt","r");

    while(!feof(f))
    {
        fscanf(f,"%d",&numar);
        if(prim(numar))
        {
            printf("%d ",numar);
        }
    }
}
