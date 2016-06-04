#include <stdio.h>
#include <stdlib.h>

struct point { int x, y; };
void init(int tablou[ ])
{
    int n, i;
    n=sizeof tablou / sizeof(tablou[0]);
    for(i=0; i<n; i++)
        tablou[i]=0;
}
int main()
{
    //    int x = 1234;
    //printf("%#010d\n",x);

    printf("%d",sizeof(struct point));

    char t[]="timisoara", *p,*q,n;
    p=q=t;
    while(*q++);
    n=q-p;
    printf("%d",n);

    double x = 0;
    printf("asdf%g",x);
    return 0;


}
