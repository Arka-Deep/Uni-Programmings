#include <stdio.h>
int main(){
    char ch;
    int a,b;
    printf("Select a choice from the menu below\n+ ---->Add\n- ---->Subtract\n/ ---->Divide\n* ---->Multiply\n%% ---->Modulus\n");
    scanf(" %c",&ch);
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);


    switch(ch){
        case '+':
            printf("Addition = %d",a+b);
            break;
        case '-':
            printf("Subtraction = %d",a-b);
            break;
        case '*':
            printf("Multiply = %d",a*b);
            break;
        case '/':
            printf("Division = %f",(float)a/b);
            break;
        case '%':
            printf("Modulus = %d",a%b);
            break;

        default:
            printf("Invalid option");
            break;
        
    }
    return 0;
}