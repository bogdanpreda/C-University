#include <stdio.h>
#include <stdlib.h>

int factorial(int nr)
{
    int i,p=1;
    for(i=1;i<=nr;i++)
    {
        p*=i;
    }
    return p;
}
int main()
{
    int n,m;
    printf("n= m=");
    scanf("%d %d", &n,&m);
    float c = (float)factorial(n)/(factorial(m)*factorial(n-m)) ;
    printf("C n luate cate m=%.2f",c);
    return 0;
}
