#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr_1[5];
    for(int i=0;i<5;i++){
            scanf("%d",&arr_1[i]);
    }
    for(int i=0;i<5;i++){
            printf("%d       ",arr_1[i]);
    }
    int max,min;
    int maxPos,minPos;
    max=min=arr_1[0];
    for(int i=1;i<5;i++){
        if (min>arr_1[i]){
                min=arr_1[i];
                minPos=i;
                }
        if (max<arr_1[i]){
                max=arr_1[i];
                maxPos=i;
                }
    }
    printf("\nthe maximum number is %d in position %d\n",max,maxPos);
    printf("the minimum number is %d in position %d\n",min,minPos);

    for (int i=0;i<4;i++){
            for (int j=i+1;j<5;j++){
                if (arr_1[i]>arr_1[j]){
                    int temp=arr_1[i];
                    arr_1[i]=arr_1[j];
                    arr_1[j]=temp;
                }
                else{}

             }
    }
    for(int i=0;i<5;i++){
         printf("%d       ",arr_1[i]);
    }


    return 0;
}
