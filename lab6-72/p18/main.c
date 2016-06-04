#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[9];
    int nr=0,i;

    scanf("%s",&s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            int cifra = s[i]-'0';
            nr=nr*10+cifra;
        }
    }
    printf("%d\n",nr);
    return 0;
}
