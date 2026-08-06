#include <stdio.h>

int fibo(int n){
    if(n<=1)
        
        return 0;
    if(n==2)
        return 1;
    int fibonachi=fibo(n-2)+fibo(n-1);
    
    return fibonachi;

}

int main(){
    for (int input=1;input<=10;input++){
    
    
    printf("%d ",fibo(input));
    }

    }
