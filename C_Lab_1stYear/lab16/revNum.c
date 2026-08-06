#include <stdio.h>
int rev(int num){
    int rev=0;
    for(int i=num;i>0;i/=10){
        rev=(rev*10)+(i%10);
    }
    return rev;
}

int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

   
    printf("The reverse of %d is %d\n",num,rev(num));
    
}