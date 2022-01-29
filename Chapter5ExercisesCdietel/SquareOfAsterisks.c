#include <stdio.h>

int main(void ){
    int NumberEntered;
    printf("Enter the number");
    scanf("%d",&NumberEntered);
    for (int i = 0; i < NumberEntered; i++) {
        printf("*");
        for (int j = 0; j < NumberEntered-1; j++) {
            printf("*");
            if(j+1==NumberEntered-1){
                printf("\n");
            }
        }
    }


    return 0;
}
