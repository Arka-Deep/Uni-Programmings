#include <stdio.h>
int main(){
    int grade;
    printf("Enter your marks\n");
    scanf("%d",&grade);
    grade=grade/10;


    switch(grade){
        case 10:
            printf("Grade = O");
            break;
        case 9:
            printf("Grade = O");
            break;
        case 8:
            printf("Grade = E");
            break;
        case 7:
            printf("Grade = A");
            break;
        case 6:
            printf("Grade = B");
            break;
        case 5:
            printf("Grade = C");
            break;
        case 4:
            printf("Grade = D");
            break;
        default:
            printf("Fail");
            break;
        
    }
    return 0;
}