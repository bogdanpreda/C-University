#include <stdio.h>
#include <stdlib.h>

void citire(int *nr_elem, int a[])
{
    int i;

    printf("n=");
    scanf("%d",nr_elem);

    for(i=0;i<*nr_elem;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        //scanf("%d",tablou+i);
    }
}
void afisare(int nr_elem, int tablou[])
{
    int i;
    for(i=0;i<nr_elem;i++)
    {
        printf("a[%d]=%d\n",i,tablou[i]);
    }
}
int main()
{
    int n,i,a[10];

    citire(&n,a);

    afisare(n,a);

    return 0;
//tablou[i]=*(tablou+i)/i[tablou]-*(i+tablou)
}
