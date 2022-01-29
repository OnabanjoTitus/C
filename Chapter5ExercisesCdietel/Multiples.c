#include <stdio.h>

int main(void ){
    int isMultiple(int firstInteger,int secondInteger);
    int numberOne,numberTwo;
    printf("Enter the first Number");
    scanf("%d",&numberOne);
    printf("Enter the second Number");
    scanf("%d",&numberTwo);
    int returnNumber=isMultiple(numberOne,numberTwo);
    if(returnNumber==1){
        printf("Number one is a multiple of number two");
    } else{
        printf("Number one is not a multiple of number two");
    }
    return 0;
}
int isMultiple(int firstInteger,int secondInteger){
    if(firstInteger%secondInteger==0){
        return 1;
    }
    return 0;
}