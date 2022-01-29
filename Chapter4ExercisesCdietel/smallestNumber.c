#include <stdio.h>
int main(void ){
    int numberEntered,smallestNumber,numberEntered2;
    printf("Enter the first Number");
    scanf("%d",&numberEntered);
    smallestNumber= numberEntered;
    for(int counter=1;counter<numberEntered;counter++){
        printf("Enter the NextNumber");
        scanf("%d",&numberEntered2);
        if(numberEntered2<smallestNumber){
            smallestNumber=numberEntered2;
        }
    }
    printf("The smallestNumber is %d",smallestNumber);
    return 0;
}
