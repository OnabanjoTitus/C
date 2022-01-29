#include <stdio.h>
int main(void){
    static int seats[10]={0};
    int seatSelected;
    printf("Welcome To TEE'S AIRLINE ENTER THE TYPE OF SEATS YOU WOULD LIKE TO BOOK or -1 to quit\n");
    scanf("%d",&seatSelected);
    while (seatSelected!=-1){
        if(seats[9]==2&&seats[4]==1){
            printf("The plane is filled up the next flight leaves in 3 hours\n");
        }
        if(seatSelected==1){
            if(seats[4]==1){
                printf("All Economy class seats are filled up try the first class seats\n");
            }
            for(int i=0;i<5;i++){
                if(seats[i]==0){
                    seats[i]=1;
                    break;
                }
            }

        }

        if(seatSelected==2){
            if(seats[9]==2){
                printf("All first class seats are filled up try economy class\n");
            }
            for(int i=5;i<10;i++){
                if(seats[i]==0){
                    seats[i]=2;
                    break;
                }
            }

        }
        printf("Welcome To TEE'S AIRLINE ENTER THE TYPE OF SEATS YOU WOULD LIKE TO BOOK or -1 to quit\n");
        scanf("%d",&seatSelected);
    }
    printf("The plane contains\n");
    for (int i = 0; i < 10; i++) {
        printf("seats %d---%d\n",i+1,seats[i]);
    }

    return 0;

}