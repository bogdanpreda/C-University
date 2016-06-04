#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conversie_int(long int nr, int baza)
{
    int p, r;
    while(nr)
    {
        r = nr%baza;
        printf("%d",r);
        nr = nr/baza;
    }
}
int main()
{
    int p,r,nr8;
    long int nr = 123456789;

    printf("opusul lui %ld in baza %d este: -",nr,2);
    conversie_int(nr,2);
    printf("\n");

    printf("opusul lui %ld in baza %d este: -",nr,8);
    conversie_int(nr,8);
     printf("\n");
    printf("opusul lui %ld in baza %d este: -",nr,16);

    long int nrc= nr;
    char nr16r[55], nr16[55];
    char v[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int i=0,j;
    while(nrc)
    {
        r = nrc%16;
        nr16r[i++] = v[r];
        nrc = nrc/16;
    }
    nr16r[i] = '\0';

    for(j=0;j<i;j++)
    {
        nr16[i-j-1] = nr16r[j];
    }
    nr16[i] = '\0';
    printf("%s",nr16);

    return 0;
}
