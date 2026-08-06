#include <stdio.h>
int main(){
    int num=0,cnt=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            cnt++;
            break;
        }
    }
    if(cnt){
        printf("It is not a prime \n");
    }
    else{
        printf("it is a prime\n");
    }

    return 0;
}