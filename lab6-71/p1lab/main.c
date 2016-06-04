#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;

    printf("nota=");
    scanf("%d",&nota);

    switch(nota)
    {
    case 10:
        printf("excelent");
    break;

    case 9:
        printf("foarte bine");
    break;

    case 8:
    case 7:
        printf("bine");
    break;

    case 6:
    case 5:
        printf("Suficient");
    break;

    case 4:
    case 3:
    case 2:
    case 1:
        printf("ne vedem la vara");
    break;

    default:
        printf("invalid");
    }
    return 0;
}
