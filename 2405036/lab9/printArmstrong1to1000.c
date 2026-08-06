//sum of individual digits raised to the power of total number of digits
#include <stdio.h>
#include <math.h>
int main(){
    
    for(int num=1;num<=1000;num++){

    int dig=0,sum=0;

   
    for(int i=num;i!=0;i/=10){//find number of digits
        dig++;
    }

    for(int i=num;i!=0;i/=10){//iterate through individual digits
        int ld=i%10;   
        sum=sum+pow(ld,dig);

    }
    if(sum==num){
        printf("%d ",num);
    }
  

    }
    printf("\n");

}