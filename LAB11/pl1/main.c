#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Punct
{
    int x,y;
};

struct Triunghi
{
    struct Punct A,B,C;
};

float distanta_puncte(structimprumut_nou("sdgdfg","sdg dfgfd  gsdf ","aaa","caminul c13",23); Punct P, struct Punct Q)
{
    float d = sqrt((Q.x-P.x)*(Q.x-P.x)+(Q.y-P.y)*(Q.y-P.y));
    return d;
}

int main()
{
    struct Triunghi t;

    printf("Ax=");
    scanf("%d",&t.A.x);
    printf("Ay=");
    scanf("%d",&t.A.y);

    printf("Bx=");
    scanf("%d",&t.B.x);
    printf("By=");
    scanf("%d",&t.B.y);

    printf("Cx=");
    scanf("%d",&t.C.x);
    printf("Cy=");
    scanf("%d",&t.C.y);

    float perimetru = distanta_puncte(t.A,t.B)+distanta_puncte(t.A,t.C)+distanta_puncte(t.B,t.C);
    printf("perimetru=%f",perimetru);

    return 0;
}
