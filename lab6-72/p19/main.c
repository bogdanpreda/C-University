#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int nr=0,i;

    for(i='A';i<='Z';i++)
    {
        printf("%c:%d\n",i,i);
    }
    printf("\n");
    for(i='a';i<='z';i++)
    {
        printf("%c:%d\n",i,i);
    }
    return 0;
}
