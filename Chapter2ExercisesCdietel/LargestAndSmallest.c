#include <stdio.h>

int main(void){
    int firstNumber,secondNumber,thirdNumber,smallest,largest;
    printf("Enter the firstNumber\n");
    scanf("%d",&firstNumber);
    printf("Enter the secondNumber\n");
    scanf("%d",&secondNumber);
    printf("Enter the thirdNumber\n");
    scanf("%d",&thirdNumber);
    smallest=firstNumber;
    largest=firstNumber;
    if(smallest>secondNumber){
        smallest=secondNumber;
    }
    if(smallest>thirdNumber){
        smallest=thirdNumber;
    }
    if(largest<secondNumber){
        largest=secondNumber;
    }
    if(largest<thirdNumber){
        largest=thirdNumber;
    }
    printf("The smallest number is %d\n",smallest);
    printf("The largest number is %d\n",largest);

    return 0;
}