#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",!a);
    printf("%d\n",!b);
    printf("%d\n",a&&b);
    printf("%d\n",a||b);
    printf("%d\n",!a&&b||!b&&a );
    return 0;
}
