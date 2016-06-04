#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c",&c);
    if(c>='a'&&c<='z')
        printf("caracterul %c este litera mica",c);
    else if(c>='A'&&c<='Z')
        printf("caracterul %c este litera mare",c);
    else if(c>='0' && c<='9')
        printf("caracterul %c este cifra",c);

    return 0;
}
