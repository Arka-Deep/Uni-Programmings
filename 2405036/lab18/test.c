#include <stdio.h>
void f(int n){
    if(n>=0){
        f(n-1);
        printf("%d",n);
    }
}

int main(){
    f(4);
}