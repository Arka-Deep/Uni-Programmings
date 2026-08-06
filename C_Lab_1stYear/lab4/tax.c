#include <stdio.h>
int main(){
    float inc,tax,tax_per;
    printf("Enter your salary :\n");
    scanf("%f",&inc);
    if(inc<=150000){
        tax_per=0;
    }
    else if (inc <=300000){
        tax_per = 0.1;
    }
    else if(inc <=500000){
        tax_per=0.2;
    }
    tax=inc*tax_per;
    printf("Your total tax liability is : Rs%.2f",tax);
    return 0;

}