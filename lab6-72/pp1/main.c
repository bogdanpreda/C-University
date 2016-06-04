#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    scanf("%c",&c);
    if(c>='A' && c<='Z')
        printf("caracterul %c este litera mare",c);
    else  if(c>='a' && c<='z')
        printf("caracterul %c este litera mica",c);
    return 0;
}
