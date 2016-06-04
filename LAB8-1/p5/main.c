#include <stdio.h>
#include <stdlib.h>

int aranjamente(int n, int m)
{
    int i,p=1;
    for(i=0;i<m;i++)
    {
        p*=n-i;
    }
    return p;
}
int main()
{
    int n,m;
    printf("n= m=");
    scanf("%d %d", &n,&m);
    printf("%d\n", aranjamente(2,10));
    printf("A de n luate cate m=%d",aranjamente(n,m));
    return 0;
}
