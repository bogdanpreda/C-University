#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[]={1,2,3,4};
    int n=4,i,j,x;

    for(i=0;i<n;i++)
    {
        x = v[0];
        for(j=1;j<n;j++)
        {
            v[j-1]=v[j];
        }
        v[n-1]=x;

        for(x=0;x<n;x++)
            printf("%d ",v[x]);
        printf("\n");
    }

    return 0;
}
