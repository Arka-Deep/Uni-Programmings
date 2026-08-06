//sum of individual digits raised to the power of total number of digits
#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter a number ");
    int num;
    int dig=0,sum=0;

    scanf("%d",&num);
    for(int i=num;i!=0;i/=10){//find number of digits
        dig++;
    }

    for(int i=num;i!=0;i/=10){//iterate through individual digits
        int ld=i%10;   
        sum=sum+pow(ld,dig);

    }
    if(sum==num){
        printf("It is an Armstrong Number\n");
    }
    else{
        printf("It is not an Armstrong number\n");
    }

}