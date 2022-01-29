#include <stdio.h>

int main(void ){
    int numberEntered,factorialOfNumber;
    printf("Enter the a number between 1 to 5");
    scanf("%d",&numberEntered);
    factorialOfNumber=numberEntered;
    for (int counter=1;counter<numberEntered;counter++){
        factorialOfNumber*=counter;
    }
    printf("The factorial of %d is %d",numberEntered,factorialOfNumber);
    return 0;
}
