#include <stdio.h>

int main(void ){
    int isEvenOrOdd(int number);
    int numberEntered;
    printf("Enter the number\n");
    scanf("%d",&numberEntered);
    while (numberEntered > 0){
       int result =isEvenOrOdd(numberEntered);
       if(result==1){
           printf("Number entered is even\n");
       } else{
           printf("Number entered is odd\n");
       }
        printf("Enter the number\n");
        scanf("%d",&numberEntered);
    }
    return 0;
}
int isEvenOrOdd(int number){
    if(number%2==0){
        return 1;
    }
    return 0;
}