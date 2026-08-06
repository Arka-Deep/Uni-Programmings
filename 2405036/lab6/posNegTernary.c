#include <stdio.h>
int main(){
    printf("Enter a number \n");
    int n;
    scanf("%d",&n);
    n==0?printf("Zero\n"):n>0?printf("Positive\n"):printf("Negative\n");
    return 0;
}