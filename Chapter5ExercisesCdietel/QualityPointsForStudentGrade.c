#include <stdio.h>

int main(void ){
    void studentGrader(int grade);
    int studentGrade;
    printf("Enter the student grade");
    scanf("%d",&studentGrade);
    while (studentGrade!=-1){
        studentGrader(studentGrade);
        printf("Enter the student grade");
        scanf("%d",&studentGrade);
    }

    return 0;
}
void studentGrader(int grade){
  grade=grade/10;
    switch (grade) {
        case 10:case 9:
            printf("The student point is 4\n");
            break;
        case 8:
            printf("The student point is 3\n");
            break;
        case 7:
            printf("The student point is 2\n");
            break;
        case 6:
            printf("The student point is 1\n");
            break;
        default:
            printf("The student point is 0\n");
            break;
    }
}
