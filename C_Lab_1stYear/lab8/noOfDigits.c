#include <stdio.h>
int main(){
    int num=0,cnt=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=num;i>0;i/=10){
        cnt++;
    }
    printf("The no of digits in %d are %d\n",num,cnt);
    return 0;
}