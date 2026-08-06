#include <stdio.h>

int main(){
    int num;
    printf("Enter value of n\n");
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<=num;i++){
        int pow=1;
        for(int j=1;j<=i;j++){
            pow=pow*i;
        }
        sum+=pow;
    }
    printf("the sum of series is %d\n",sum);
    return 0;
}