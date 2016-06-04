#include <stdio.h>
#include <stdlib.h>

int lungime_sir(char *s)
{
    int i=0;

    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}
char* copiere(char *s)
{
    char *p = (char *)malloc(lungime_sir(s)*sizeof(char));
    int i=0;
    for(i=0;i<lungime_sir(s);i++)
    {
        p[i]=s[i];
    }
    p[i]='\0';
    return p;
}
int main()
{
    char s[20];
    char *t;
    printf("s=");
    scanf("%s",s);

    printf("lungime=%d\n",lungime_sir(s));

    t=copiere(s);
    printf("p=%s\n",t);

    free(t);
    return 0;
}
