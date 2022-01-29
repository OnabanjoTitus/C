#include <stdio.h>

int main(void ){
    int NumberEntered;
    char character;
    printf("Enter the number\n");
    scanf("%d",&NumberEntered);
    printf("Enter the fillCharacter\n");
    scanf("%c",&character);
    for (int i = 0; i < NumberEntered; i++) {
        printf("%c",character);
        for (int j = 0; j < NumberEntered-1; j++) {
            printf("%c",character);
            if(j+1==NumberEntered-1){
                printf("\n");
            }
        }
    }


    return 0;
}
