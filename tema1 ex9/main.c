#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    x=22344;
    y=123;
    printf("______________________________________________________________\n");
    printf("%8c %8c %8s %8s %8s %8s\n",'x','y',"x+y","x-y","x*y","x/y");
    printf("--------------------------------------------------------------\n");
    printf("%8d %8d %8d %10d %10d %10f\n",x,y,x+y,x*y,(float)x/y);
    printf("--------------------------------------------------------------\n");
    return 0;
}