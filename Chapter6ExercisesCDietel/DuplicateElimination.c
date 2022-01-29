#include <stdio.h>
#include <stdlib.h>

void duplicateRemover(int unsorted[]);
int main(void ){
    int array[20]={0};
    for (int i = 0; i < 20; i++) {
        array[i]=1+rand()%20;
    }
    duplicateRemover(array);
    return 0;
}
void duplicateRemover(int unsorted[]){
    int sorted[20]={0};
    printf("The array before sorting\n");
    for (int i = 0; i < 20; i++) {
        printf("number%d: %d ",i+1,unsorted[i]);
    }
    for(int i=0;i<20;i++){
        for (int j = 0; j < 20; j++) {
            if(unsorted[i]==sorted[j]){
                break;
            }
            if(sorted[j]==0){
               sorted[j]= unsorted[i];
                break;
            }

        }
    }
    printf("\nThe array after sorting\n");
    for (int i = 0; i < 20; i++) {
        printf("number%d: %d ",i+1,sorted[i]);
    }
}