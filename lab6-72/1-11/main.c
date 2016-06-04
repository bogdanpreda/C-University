#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int n,contor=0,ind,s=0,val_poz=0,minim=INT_MAX;

    do
    {
        ind=scanf("%d",&n);

        if(ind!=EOF)
        {
            contor++;
            if(n>=0)
                val_poz++;
            s+=n;
            if(minim>n)
                minim = n;
        }
    } while(ind!=EOF);

    float ma = (float)s/contor;

    printf("valori citite: %d\n",contor);
    printf("media aritmetica: %f\n",ma);
    printf("valori citite pozitive: %d\n",val_poz);
    printf("valoarea minima: %d\n",minim);

    return 0;
}
