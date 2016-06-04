#include <stdio.h>
#include <stdlib.h>

struct Student{
    char nume[30];
    float nota;
};

void salvare()
{
    struct Student stud;

    printf("nume student: ");
    gets(stud.nume);

    printf("nota student: ");
    scanf("%f",&stud.nota);

    FILE *f = fopen("student.txt","wb");
    fwrite(&stud,sizeof(struct Student),1,f);

    fclose(f);
}
void incarcare()
{
    struct Student stud1;

    FILE *f = fopen("student.txt","rb");
    fread(&stud1,sizeof(struct Student),1,f);

    fclose(f);
    printf("nume student: %s\n", stud1.nume);
    printf("nota student: %.2f", stud1.nota);
}
int main()
{
    salvare();
    incarcare();
    return 0;
}
