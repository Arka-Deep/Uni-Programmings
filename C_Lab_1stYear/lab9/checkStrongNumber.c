//strong number =sum of factorial of individual digits
#include <stdio.h>
int main(){
    printf("Enter a number ");
    int num;
    int sum=0;
    scanf("%d",&num);
   
    for(int i=num;i!=0;i/=10){//iterates through individual digits

        int dig=i%10;
        int fac=1;
        //finding factorial
        for(int j=1;j<=dig;j++){
            fac=fac*j;
        }

        sum=sum+fac;//adding the factorial of individual digits

    }
    if(sum==num)
        printf("Strong number\n");
    else    
        printf("Not a Strong Number\n");
}