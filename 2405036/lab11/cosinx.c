#include <stdio.h>
int main(){
    float deg,radian=0,numerator,denominator=1,sum;
    int n,cnt=1;
    printf("Enter value of x\n");
    scanf("%f",&deg);
    printf("enter the value of n\n");
    scanf("%d",&n);
    
    radian=3.14*deg/180;
    //printf("%f",radian);
    sum=1;
    numerator=1;

    for(int i=2;i<=n;i++){
        numerator=-1*numerator*radian*radian;
        denominator=denominator*(2*i-2)*(2*i-3);
        sum+=numerator/denominator;

    }
    printf("ans= %5.2f\n",sum);
}
