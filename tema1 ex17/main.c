#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr;
    scanf("%d",&nr);
    printf("%d %d %d %d \n",nr*2,nr*4,nr*8,nr*16);
    printf("%d %d %d %d \n",nr>>1,nr>>2,nr>>3,nr>>4);
    printf("%d %d %d %d \n",nr/2,nr/4,nr/8,nr/16);
    printf("%d %d %d %d \n",nr<<1,nr<<2,nr<<3,nr<<4);
    return 0;
}
