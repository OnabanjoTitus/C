#include <stdio.h>

int main(void ){
    int NumberEntered,firstNumber,secondNumber,thirdNumber,fourthNumber,fifthNumber;
    printf("Enter the Number you want to separate");
    scanf("%d",&NumberEntered);
    firstNumber=NumberEntered/10000;
    NumberEntered=NumberEntered%10000;
    secondNumber=NumberEntered/1000;
    NumberEntered=NumberEntered%1000;
    thirdNumber=NumberEntered/100;
    NumberEntered=NumberEntered%100;
    fourthNumber=NumberEntered/10;
    NumberEntered=NumberEntered%10;
    fifthNumber=NumberEntered;

    printf("%d ",firstNumber);
    printf("%d ",secondNumber);
    printf("%d ",thirdNumber);
    printf("%d ",fourthNumber);
    printf("%d",fifthNumber);
    return 0;
}