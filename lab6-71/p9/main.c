#include <stdio.h>
#include <stdlib.h>
float f(int x)
{
    if(x<1)
        return (pow(x,2)-9.0)/(x-1);
    else if(x>5)
        return 1.0/(x-5);
    else
        return x;
}
int main()
{
    int a,b,p,i,contor=0,s=0,contor2=0;
    printf("a= b= p= \n");
    scanf("%d %d %d",&a,&b,&p);
    for(i=a;i<=b;i+=p)
    {
        printf("%f ",f(i));
        contor++;
        s+=f(i);
        if((i>=0 && f(i)>=0 && (float)s/contor>=0) || (i<0 && f(i)<0 && (float)s/contor<0))
           contor2++;
    }
    printf("\n contor= %d",contor2);

    return 0;
}
