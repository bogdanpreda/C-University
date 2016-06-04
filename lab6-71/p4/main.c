#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr,s=0,impar=0;

    do
    {
        printf("nr=");
        scanf("%d",&nr);
        if (nr%2!=0)
            impar++;
        if(nr>0)
            s+=nr;
    } while(nr);

    printf("suma numerelor %d \n",s);
    printf("numere impare %d",impar);
    return 0;
}


