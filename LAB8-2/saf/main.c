#include <stdio.h>
#include <stdlib.h>
int d;
void modif(int x)
{
    static int d;

    d+=5;

}
int main()
{
    modif(1);
    printf("%d",d);
    return 0;
}
