#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float maxim_ab = (a>b)?a:b;
    char relatie_ab = (a>b)?'>':'<';
    printf("maximul dintre a si b: %f\n",maxim_ab);

    printf("relatie a b: %c\n",relatie_ab);

    float maxim_abc = (a>b)?(a>c)?a:c:(b>c)?b:c;
    printf("maximul dintre a b si c: %f\n",maxim_abc);

    if(a>b)
        printf("%f\n",a);
    else
        printf("%f\n",b);

    if(a>b)

        if(a>c)
            printf("%f\n",a);
        else
            printf("%f\n",c);
    else

        if(b>c)
            printf("%f\n",b);
        else
            printf("%f\n",c);

    return 0;
}
