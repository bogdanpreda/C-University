#include <stdio.h>
#include <stdlib.h>
FILE *f;

void writev(int v[], int *n)
{
    f = fopen("vector.txt","w");
    printf("n=");
    scanf("%d",n);

    int i;

    for(i=0; i<*n; i++)
    {
        printf("v[%d}=",i);
        scanf("%d",&v[i]);
        fprintf(f,"%d ",v[i]);
    }
    fclose(f);
}

void showv(int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",v[i]);
    }
}
int main()
{
    int v[100],b[100],n;

    int c[] = {12,3,4,5,5};
    printf("%d",sizeof(c)/sizeof(int));
    writev(v,&n);
    showv(v,n);

    return 0;
}
