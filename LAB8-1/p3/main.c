#include <stdio.h>
#include <stdlib.h>
int aranjamente(int n, int m)
{
    int i,p=1;
    for(i=0;i<=m;i++)
        p*=n-i+1;
    return p;
}
int main()
{
    int n,m;
    printf("n= m=");
    scanf("%d %d",&n,&m);
        printf("A de %d luate cate %d=",aranjamente(n,m));
    return 0;
}
