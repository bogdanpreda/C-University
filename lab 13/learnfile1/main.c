#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char buffer[30];
    char c;
    scanf("%c",&c);
    printf("%c\n",c);
    printf("Write a file!\n");
/*
    f = fopen("l1.txt","a+");
    /*

        fprintf(f,"hello, ");
        fprintf(f,"matrix");
        fprintf(f,"\nWhat are you doing today?");
        printf("insert a number");
        int nr;
        scanf("%d",&nr);

        fprintf(f,"%d",nr);

        fscanf(f,"%s",buffer);
        printf("the buffer is: %s\n",buffer);
        fscanf(f,"%s",buffer);



        fputc('c', f);
        fputc('\n', f);
        fputs("hello world!\n",f);
        fclose(f);


        fscanf(f,"%s",buffer);
        printf("%s",buffer);
        printf("\n\n");
        fgets(buffer,sizeof(buffer),f);
        printf("%s",buffer);
*//*
    char username[9];
    int score;
    char mesaj[100];
    fgets(mesaj,sizeof(mesaj),f);
    printf("%s\m",mesaj);
    while (!feof(f))
    {
        fscanf(f, "%s %d", username, &score);
        printf("%s %d\n", username, score);
    }
*/
/*
    while(fgets(buffer,sizeof(buffer),f))
    {
        printf("%s", buffer);
    }*/
    return 0;
}
