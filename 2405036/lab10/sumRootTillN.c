#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Enter value of n\n");
    scanf("%d",&num);
    float sum=0;
    for(int i=1;i<=num;i++){
       sum=sum+sqrt(i);
    }
    printf("the sum of series is %f\n",sum);
    return 0;
}