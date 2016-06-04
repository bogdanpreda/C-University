#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,s1=0,s2=0;
    printf("n1= n2= ");

    scanf("%d %d",&n1,&n2);

    while(n1)
    {
        int uc=n1%10;
        s1+=uc*uc;
        n1/=10;
    }
    while(n2)
    {
        int uc=n2%10;
        s2+=uc;
        n2/=10;
    }
    if(s1==s2)
        printf("da");
    else
        printf("nu");
    return 0;
}
