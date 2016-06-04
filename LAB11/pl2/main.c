#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x,y;
}Punct;

typedef struct
{
    Punct A,B,C;
}Triunghi;

float distanta_puncte(Punct P, Punct Q)
{
    float d = sqrt((Q.x-P.x)*(Q.x-P.x)+(Q.y-P.y)*(Q.y-P.y));
    return d;
}
float panta(Punct P, Punct Q)
{
    return float(Q.y-P.y)/(Q.x-P.x);
}
void citire(Punct *p)
{
    printf("P(x,y)=");
    scanf("%d",&p->x);
    scanf("%d",&p->y);
}

int main()
{
    Triunghi t;

    citire(&t.A);
    citire(&t.B);
    citire(&t.C);

    float perimetru = distanta_puncte(t.A,t.B)+distanta_puncte(t.A,t.C)+distanta_puncte(t.B,t.C);
    printf("perimetru=%f",perimetru);

    return 0;
}
