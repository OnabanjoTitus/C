#include <stdio.h>

int main(void){
    int integer1,integer2,sum,product,quotient,remainder;
    printf("Enter the first integer");
    scanf("%d",&integer1);
    printf("Enter the second integer");
    scanf("%d",&integer2);
    sum=integer1+integer2;
    product=integer1*integer2;
    quotient=integer1/integer2;
    remainder=integer1%integer2;
    printf("The sum of the two integers is %d\n",sum);
    printf("The product of the two integers is %d\n",product);
    printf("The quotient of the two integers is %d\n",quotient);
    printf("The remainder of the two integers is %d\n",remainder);
    return 0;
}
