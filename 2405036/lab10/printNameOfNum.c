#include <stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int rev=0;

    for(int i=num;i!=0;i/=10){//reverse the digits
        int ld=i%10;
        rev=(rev*10)+ld;
        

    }
    //printf("%d",rev);
    while(rev){
        int ld=rev%10;
        rev/=10;
        switch(ld){
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
    }
    printf("\n");

}