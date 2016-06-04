#include <stdio.h>
#include <stdlib.h>

int putere(int nr,int q)
{
    int i,p=1;
    for(i=1;i<=q;i++)
    {
        p*=nr;
    }
    return p;
}
int main()
{
    int n,n2,nr=0,minim=9,contor=0,c[100],ok=0;
    printf("n=");
    scanf("%d",&n);

    n2=n;
    while(n2)
    {
        if(minim>n2%10)
            minim=n2%10;

        n2/=10;
    }
    n2=n;
    while(n2)
    {
        c[contor++]=n2%10;
        n2/=10;
    }
    int p=1,i;
    for(i=0;i<contor;i++)
    {
        if(c[i]==minim && ok==0)
        {
            ok=1;
            continue;
        }
        nr=nr+p*c[i];
        p*=10;

    }
    printf("%d",nr);
    return 0;
}
/*2143
nr/100+n%10*10;
*/
