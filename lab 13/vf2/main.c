#include <stdio.h>
#include <stdlib.h>
FILE *f;

void writev(int v[], int *n)
{
    printf("n=");
    scanf("%d",n);

    int i;

    for(i=0; i<*n; i++)
    {
        printf("v[%d}=",i);
        scanf("%d",&v[i]);
    }

}

int main()
{
    int v[100],b[100],n;

    writev(v,&n);
    f = fopen("vf2.txt","wb+");
    fwrite(v,sizeof(int),n,f);
    fclose(f);

    f = fopen("vf2.txt","rb");
    fread(b,sizeof(int),n,f);
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
