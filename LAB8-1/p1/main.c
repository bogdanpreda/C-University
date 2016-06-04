#include <stdio.h>
#include <stdlib.h>

int cifra_maxim(int nr)
{
    int cmax=0;
    while(nr)
    {
        if(nr%10>=cmax)
        {
            cmax =nr%10;
        }
        nr/=10;
    }
    return cmax;
}
int aparitie(int nr, int cmax)
{
    int aparitie=0;
    while(nr)
    {
        if(nr%10==cmax)
            aparitie++;
        nr/=10;
    }
    return aparitie;
}
int main()
{
    int n;
    printf("n= ");
    scanf("%d",&n);
    printf("cifra maxima este %d, iar numarul de aparitii este %d",cifra_maxim(n),aparitie(n,cifra_maxim(n)));
    return 0;
}
