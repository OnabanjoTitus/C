#include <stdio.h>

int main(void){
    double hoursParked;
    double charge, totalCharge = 0.0;
    printf("Enter the hour parked");
    scanf("%lf",&hoursParked);
    while (hoursParked>0&&hoursParked<=24){
        if(hoursParked<=3){
            charge=2.00;
        }
        if(hoursParked>3&&hoursParked<24){
          charge=2.00+((hoursParked-3)*0.50) ;
        }
        if(hoursParked==24){
            charge=10.0;
        }
        totalCharge+=charge;
        printf("Enter the hour parked");
        scanf("%lf",&hoursParked);
    }
    printf("The total charge is %.2f",totalCharge);

    return 0;
}