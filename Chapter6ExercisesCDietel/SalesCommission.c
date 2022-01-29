#include <stdio.h>
int main(void ){
    int salesCommision[9]={0};
    int grossSales,salary;
    printf("Enter the employee gross sales for the week");
    scanf("%d",&grossSales);
    while (grossSales!=-1){
        salary=200+((grossSales*9)/100);
        switch (salary/100) {
            case 2:
               salesCommision[0]+=1;
                break;
            case 3:
                salesCommision[1]+=1;
                break;
            case 4:
                salesCommision[2]+=1;
                break;
            case 5:
                salesCommision[3]+=1;
                break;
            case 6:
                salesCommision[4]+=1;
                break;
            case 7:
                salesCommision[5]+=1;
                break;
            case 8:
                salesCommision[6]+=1;
                break;
            case 9:
                salesCommision[7]+=1;
                break;
            default:
                salesCommision[8]+=1;
                break;
        }
        printf("Enter the employee gross sales for the week");
        scanf("%d",&grossSales);

    }
    printf("The total sales commision for the employees are:\n");
    printf("$200-299 ----%d\n",salesCommision[0]);
    printf("$300-399 ----%d\n",salesCommision[1]);
    printf("$400-499 ----%d\n",salesCommision[2]);
    printf("$500-599 ----%d\n",salesCommision[3]);
    printf("$600-699 ----%d\n",salesCommision[4]);
    printf("$700-799 ----%d\n",salesCommision[5]);
    printf("$800-899 ----%d\n",salesCommision[6]);
    printf("$900-999 ----%d\n",salesCommision[7]);
    printf("$1000-above ----%d\n",salesCommision[8]);


    return 0;

}