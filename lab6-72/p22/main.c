#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,a[100],i,s=0;
    printf("gradul polinomului(x)=");
    scanf("%d",&x);

    for(i=0;i<=x;i++)
    {
        printf("a%d=",i);
        scanf("%d=",&a[i]);
    }
    s=a[0];

    for(i=1;i<=x;i++)
    {
        int t = pow(x,i);
        s=s+a[i]*t;
    }
    printf("suma=%d",s);
    return 0;

}
