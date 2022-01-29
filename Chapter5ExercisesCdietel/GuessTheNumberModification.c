#include <stdio.h>
#include <stdlib.h>
int main(){
    int randomizer();
    int userGuess,NumberOfTrails=0;
    while (NumberOfTrails<10){
        int randomNumber=randomizer();
        printf("Enter ur guess\n");
        scanf("%d",&userGuess);
        if(randomNumber==userGuess){
            printf("You Guessed right\n");
            NumberOfTrails=NumberOfTrails/2;
            printf("You now have %d trails left\n",10-NumberOfTrails);
        }
        if(randomNumber<userGuess){
            printf("Too high try again\n");
            NumberOfTrails+=1;
            printf("You now have %d trails left\n",10-NumberOfTrails);
        }
        if(randomNumber>userGuess){
            printf("Too low try again\n");
            NumberOfTrails+=1;
            printf("You now have %d trails left\n",10-NumberOfTrails);
        }
    }
    return 0;
}
int randomizer(){
    int number =1+rand()%1000;
    return number;
}