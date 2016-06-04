#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int nr_prim(int n)
{
    int i;

    if(n<2)
        return 0;
    else if (n==2)
        return 0;
    else
    {
        for(i=3;i<=(int)sqrt(n);i++)
        {
            if(n%i == 0)
                return 0;
        }
        return 1;
    }

}
int main()
{
    int nr;
    do
    {
        printf("nr=");
        scanf("%d",&nr);
        if (nr%2==0)
            printf("numarul %d este par\n",nr);
        else
            printf("numarul %d este impar\n",nr);

        printf("prim = %d\n",nr_prim(nr));
    } while(nr);

    return 0;
}
