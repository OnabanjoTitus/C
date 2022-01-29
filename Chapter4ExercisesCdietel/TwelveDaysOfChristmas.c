#include <stdio.h>

typedef struct String String;

int main(void ){
    int dayOfChristmas;
    String  song;
    printf("Enter the day of christmas");
    scanf("%d",&dayOfChristmas);
    switch (dayOfChristmas) {
        case 12:song+="The twelve ";
        case 11:song+="The eleventh ";
        case 10:song+="The tenth ";
        case 9:song+="The ninth ";
        case 8:song+="The eight ";
        case 7:song+="The seventh ";
        case 6:song+="The sixth ";
        case 5:song+="The fifth ";
        case 4:song+="The fourth ";
        case 3:song+="The third ";
        case 2:song+="The second ";
        case 1:song+="The one ";
        default:
    }
    printf("%s",song);
    return 0;
}