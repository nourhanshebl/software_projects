#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[20];
    unsigned int age;
    unsigned int degree;
    unsigned int section;
};
void print(struct student*);
int main()
{
    struct student num [5];
    strcpy (num[0].name,"Ahmed");
    num[0].age=15;
    num[0].degree=88;
    num[0].section=2;
    printf("student 1\n\n");
    printf("Name    : %s\n",num[0].name);
    printf("Age     : %d\n",num[0].age);
    printf("Degree  : %d\n",num[0].degree);
    printf("section : %d\n\n",num[0].section);
    //print();

    strcpy (num[1].name,"Ali");
    num[1].age=14;
    num[1].degree=76;
    num[1].section=4;
    printf("student 2\n\n");
    printf("Name    : %s\n",num[1].name);
    printf("Age     : %d\n",num[1].age);
    printf("Degree  : %d\n",num[1].degree);
    printf("section : %d\n\n",num[1].section);

    strcpy (num[2].name,"Nada");
    num[2].age=16;
    num[2].degree=80;
    num[2].section=1;
    printf("student 3\n\n");
    printf("Name    : %s\n",num[2].name);
    printf("Age     : %d\n",num[2].age);
    printf("Degree  : %d\n",num[2].degree);
    printf("section : %d\n\n",num[2].section);

    strcpy (num[3].name,"Alaa");
    num[3].age=13;
    num[3].degree=98;
    num[3].section=5;
    printf("student 4\n\n");
    printf("Name    : %s\n",num[3].name);
    printf("Age     : %d\n",num[3].age);
    printf("Degree  : %d\n",num[3].degree);
    printf("section : %d\n\n",num[3].section);

    strcpy (num[4].name,"Aya");
    num[4].age=15;
    num[4].degree=66;
    num[4].section=3;
    printf("student 5\n\n");
    printf("Name    : %s\n",num[4].name);
    printf("Age     : %d\n",num[4].age);
    printf("Degree  : %d\n",num[4].degree);
    printf("section : %d\n",num[4].section);
    return 0;
}

