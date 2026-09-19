#include <stdio.h>
#include <stdlib.h>

typedef struct reg_studnet
{
    char* name;
    char* course;
    int age;
} student;

void remove_barN(char* str);
int main(void)
{
    student* blood;
    int tam = 2;
    blood = malloc(tam * sizeof(student));

    for(int i = 0; i < tam; i++)
        blood[i].name = malloc(100 * sizeof(char));
    for(int i = 0; i < tam; i++)
        blood[i].course = malloc(100 * sizeof(char));

    for(int i = 0; i < tam; i++)
    {
        printf("Defini student %d name\n", i + 1);
            fgets(blood[i].name, 100, stdin);
    }
    for(int i = 0; i < tam; i++)
    {
        printf("Define student %d course\n", i + 1);
            fgets(blood[i].course, 100, stdin);
    }
    for(int i = 0; i < tam; i++)
    {
        printf("Define student %d age\n", i + 1);
            scanf("%d", &blood[i].age);
            getchar();
    }

    for(int i = 0; i < tam; i++)
        remove_barN(blood[i].name);
    for(int i = 0; i < tam; i++)
        remove_barN(blood[i].course);

    for(int i = 0; i < tam; i++)
        printf("Student %d informations\nName: %s\nAge: %d\nCourse: %s\n", i + 1, blood[i].name, blood[i].age, blood[i].course);
    for(int i = 0; i < tam; i++)
        free(blood[i].name);
    for(int i = 0; i < tam; i++)
        free(blood[i].course);
    free(blood);
return 0;
}
void remove_barN(char* str)
{
    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] == '\n')
            str[i] = '\0';
}