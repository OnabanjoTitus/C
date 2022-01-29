#include <stdio.h>
int main(void){
    int firstNumber,secondNumber,thirdNumber,sum,average,product,smallest,largest;
    printf("Enter the first number");
    scanf("%d",&firstNumber);
    printf("Enter the second number");
    scanf("%d",&secondNumber);
    printf("Enter the third number");
    scanf("%d",&thirdNumber);
    sum=firstNumber+secondNumber+thirdNumber;
    average=sum/3;
    product=firstNumber*secondNumber*thirdNumber;
    smallest=firstNumber;
    largest=firstNumber;
    if(secondNumber<smallest){
        smallest=secondNumber;
    }
    if(thirdNumber<smallest){
        smallest=thirdNumber;
    }
    if(secondNumber>largest){
        largest=secondNumber;
    }
    if(thirdNumber>largest){
        largest=thirdNumber;
    }
    printf("the sum of the 3 numbers is %d\n",sum);
    printf("the average of the 3 numbers is %d\n",average);
    printf("the product of the 3 numbers is %d\n",product);
    printf("the smallest of the 3 numbers is %d\n",smallest);
    printf("the largest of the 3 numbers is %d\n",largest);

    return 0;
}