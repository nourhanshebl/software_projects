#include <stdio.h>
#include <stdlib.h>

void Swap (int,int);
int main()
{
    int x,y;
    printf("Enter the first number\n");
    scanf("%d",&x);
    printf("Enter the second number\n");
    scanf("%d",&y);
    printf("befor swaping\nx = %d    y = %d\n",x,y);
    Swap(x,y);
    return 0;
}
void Swap (int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swaping\nx = %d    y = %d\n",x,y);
}

