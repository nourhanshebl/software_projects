#include <stdio.h>
#include <stdlib.h>

void edit(int*);

int main()
{
    int x;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("before calling edit x = %d\n",x);
    edit(&x);
    printf("after  calling edit x = %d\n",x);

    char*pc=&x;
    pc++;
    *pc=5;
    printf("%d\n",*pc);
    pc++;
    *pc=20;
    printf("%d\n",*pc);
    pc++;
    *pc=80;
    printf("%d\n",*pc);

    return 0;
}

void edit(int*px){
    (*px)++;
}

