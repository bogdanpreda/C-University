#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int bazanr = 2;

    float nr_final=0;
    int p2=1;
    int k=10,contor=0;

    float numar = 0.1101;

    while(numar != (int)numar)
    {
        numar*=10;
        contor++;
    }
    printf("%f k=%d\n",numar,contor);/*
    while(nrf)
    {
        nr_final+=(int)nrf%10*p2;
        p2*=bazanr;
        nrf/=10;
    }
        // nr_final/pow(bazanr,contor);*/
    return 0;
}
