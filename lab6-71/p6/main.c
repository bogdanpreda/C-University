#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr,csemnificativa,cunitate;
    printf("n=");
    scanf("%d",&nr);
    cunitate=nr%10;
    nr/=10;
    while(nr)
    {
        csemnificativa=nr%10;
        nr/=10;

    }

    if(csemnificativa>cunitate)
        printf("da");
    else
        printf("nu");
    return 0;
}
