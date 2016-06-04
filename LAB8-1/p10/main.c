#include <stdio.h>
#include <stdlib.h>

int inlocuire(int n,int c1,int c2)
{
    int nr2=0,p=1;
    while(n)
    {
        if(n%10==c1)
        {
            nr2=nr2+c2*p;
            p*=10;
        } else
        {
            nr2=nr2+n%10*p;
            p*=10;
        }
        n/=10;
    }
    return nr2;
}
int main()
{
    printf("%d %d\n",1234565,inlocuire(1234565,5,9));
    return 0;
}
