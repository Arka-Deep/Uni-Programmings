#include <stdio.h>
int a;
int b;
void swap();
int main(){
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap();
    printf("Variable after swaping a= %d b= %d\n",a,b);
}
void swap(){
    a=a+b;
    b=a-b;
    a=a-b;
}