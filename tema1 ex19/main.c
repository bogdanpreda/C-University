#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an;
    scanf("%d",&an);
    printf("%d\n",(an%4==0 || (an%100==0 && an%400!=0))?1:0);
    return 0;
}
