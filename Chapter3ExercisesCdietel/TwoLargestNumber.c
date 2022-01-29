#include <stdio.h>

int main(void){
    unsigned int counter=0;
    int largestNumber;
    int largestNumber2;
    int numberEntered;
    printf("Enter the Number");
    scanf("%d",&numberEntered);
    largestNumber=numberEntered;
    largestNumber2=numberEntered;
    while (counter<10){
        printf("Enter the Number");
        scanf("%d",&numberEntered);
        if(largestNumber<numberEntered){
            largestNumber=numberEntered;
        }
        if(numberEntered<largestNumber && numberEntered>largestNumber2){
            largestNumber2=numberEntered;
        }
        counter++;
    }

    printf("The Two largest Numbers are %d and %d",largestNumber,largestNumber2);

    return 0;
}