#include <stdio.h>

int main(void){
    float miles,gallonUsed,totalMilesPerGallonUsed,
            totalMiles,totalGallonUsed;
    printf("Enter gallon used\n");
    scanf("%f",&gallonUsed);
    printf("Enter miles driven\n");
    scanf("%f",&miles);
    while (gallonUsed>0){
        printf("The miles/gallon for this tank was %.2f\n",miles/gallonUsed);
        totalGallonUsed+=gallonUsed;
        totalMiles+=miles;
        printf("Enter gallon used\n");
        scanf("%f",&gallonUsed);
        printf("Enter miles driven\n");
        scanf("%f",&miles);
    }
    totalMilesPerGallonUsed=totalMiles/totalGallonUsed;

    printf("Total miles per gallon used is %.2f\n",totalMilesPerGallonUsed);

    return 0;
}