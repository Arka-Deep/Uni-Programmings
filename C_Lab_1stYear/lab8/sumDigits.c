#include <stdio.h>
int main(){
    int num=0,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    for(int i=num;i>0;i/=10){
        sum=sum+(i%10);
    }
    printf("The sum of digits of %d are %d\n",num,sum);
    return 0;
}