#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1,num_2;
    char op;
    int result=0;

    printf("Enter the operator\n");
    scanf("%c",&op);
    printf("Enter the number_1\n");
    scanf("%d",&num_1);
    printf("Enter the number_2\n");
    scanf("%d",&num_2);

    switch(op){
        case'+':
            result = num_1+num_2;
            printf("The result = %d",result);
            break;
        case'-':
            result = num_1-num_2;
            printf("The result = %d",result);
            break;
        case'*':
            result = num_1*num_2;
            printf("The result = %d",result);
            break;
        case'/':
            result = num_1/num_2;
            printf("The result = %d",result);
            break;
        default:
            printf("Wronge Input");


    }
}
