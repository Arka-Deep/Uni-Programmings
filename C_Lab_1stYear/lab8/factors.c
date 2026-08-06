#include <stdio.h>
int main(){
    int num=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    for (int i =1;i<=num;i++){
        if(num%i==0){
            printf("%d\n",i);
        }
    }
}