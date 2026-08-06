#include <stdio.h>

int isPrime(int num){
    int cnt=0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            cnt++;
            break;
        }
    }
    return cnt;

}
int main(){
    int num=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    
    if(isPrime(num)){
        printf("It is not a prime \n");
    }
    else{
        printf("it is a prime\n");
    }

    return 0;
}