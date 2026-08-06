#include <stdio.h>
int main(){
    int x,*ptr;
    printf("Enter a number\n");
    scanf("%d",&x);
    ptr=&x;
    printf("The prime factors are: \n");
    for(int i=2;i<=*ptr;i++){
        while(*ptr%i==0){
            printf("%d\n",i);
            *ptr=*ptr/i;
        }
    }
    
}