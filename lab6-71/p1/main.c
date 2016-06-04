#include <stdio.h>
#include <stdlib.h>

void a(int grade)
{
switch (grade) {
case 4: case 3: case 2: case 1: printf("Passing"); break;
case 0: printf("Failing"); break;
default: printf("Illegal Grade"); break;
 }
}

int main()
{
    a(0);
    printf("\n");
    a(1);
    printf("\n");
    a(2);
    printf("\n");
    a(3);
    printf("\n");
    a(4);
    printf("\n");
    a(5);


    return 0;
}
