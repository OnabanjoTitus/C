#include <stdio.h>
int main(void){
    int firstNumber,secondNumber;
    printf("Enter the first number");
    scanf("%d",&firstNumber);
    printf("Enter the second number");
    scanf("%d",&secondNumber);

    if(firstNumber>secondNumber){
        printf("First Number %d is greater than second Number %d",firstNumber,secondNumber);
    } if(firstNumber==secondNumber){
        printf("First Number %d is equal to second Number %d",firstNumber,secondNumber);
    } if(firstNumber<secondNumber){
        printf("Second Number %d is greater than first Number Number %d",secondNumber,firstNumber);
    }
    return 0;
}