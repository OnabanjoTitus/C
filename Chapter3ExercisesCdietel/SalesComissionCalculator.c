#include <stdio.h>

int main(void){
    float grossSales,salesCommissionSalary;

    printf("Enter the gross sale for the week and -1 to cancel");
    scanf("%f",&grossSales);
    while (grossSales!=-1){
        if(grossSales>0){
            salesCommissionSalary=200+((grossSales*9)/100);
        } else{
            salesCommissionSalary=200;
        }
        printf("The sales person salary is %.2f",salesCommissionSalary);
        printf("Enter the gross sale for the week and -1 to cancel");
        scanf("%f",&grossSales);
    }

    return 0;
}