#include <stdio.h>
#include <stdlib.h>

int bit3(int nr)
{
    //int bit = (nr<<5>>7)&1;
    int masca = 1<<2;
    int bit = nr&masca;
    return bit==0 ? 0:1;
}
int main()
{
    int nr;
    printf("nr = ");
    scanf("%d", &nr);
    printf("numarul %d are al 3 lea bit: %d ",nr,bit3(nr));

    return 0;
}
