#include <stdio.h>
int main(){
    int num=0,rev=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    for(int i=num;i>0;i/=10){
        rev=(rev*10)+(i%10);
    }
    if(num==rev){
        printf("It is a paindrome\n");
    }else{
        printf("It is not a palindrome");
    }
    //printf("The reverse of %d is %d\n",num,rev);
    return 0;
}