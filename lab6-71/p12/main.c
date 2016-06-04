#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,citire,s,contor,p;

    s=0;
    p=1;
    float arm=0;
    contor=0;

    do
    {
        citire = scanf("%d",&n);
        if(citire!=EOF)
        {
            s+=n;
            p*=n;
            arm+=1.0/n;
            contor++;

        }
    } while(citire!=EOF);

    float ma = (float)s/contor;
    float mg = pow(p,1.0/contor);
    float mar = (float)contoro/arm;

    printf("media aritmetica este %f\n",ma);
    printf("media geometrica este %f\n",mg);
    printf("media armonica este %f\n",mar);
    return 0;
}
