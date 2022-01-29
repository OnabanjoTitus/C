#include <stdio.h>
#include <stdlib.h>
int main(void ){
    int coinTosser();
    int head = 0,tail=0,frequency;
    for (int i = 0; i < 100; i++) {
        frequency=coinTosser();
        switch (frequency) {
            case 1:
                head+=1;
                break;
            case 0:
                tail+=1;
                break;
            default:
                break;
        }
    }
    printf("The frequency of head is %d\n",head);
    printf("The frequency of tail is %d\n",tail);

    return 0;
}
int coinTosser(){
    int result =rand()%22;
    return result;
}