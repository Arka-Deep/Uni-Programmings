#include <stdio.h>
int main(){

    int n,a,b;
    printf("Select a choice from the menu below \nCalculate Area\n1 ---> Rectangle\n2 ---> Circle\n3 ---> Triangle\n");

    scanf("%d",&n);
    


    switch(n){
        case 1:
            printf("Enter Length and Breath Of Triangle\n");
            scanf("%d%d",&a,&b);
            printf("Area = %d\n",a*b);
            break;
        case 2:
            printf("Enter Radius of Circle\n");
            scanf("%d",&a);
            printf("Area = %f\n",3.14*a*a);
            break;
        case 3:
            printf("Enter hieght and base of triangle\n");
            scanf("%d%d",&a,&b);
            printf("Area =%f\n",0.5*a*b);
            break;

        default:
            printf("Invalid option\n");
            break;
        
    }
    return 0;
}