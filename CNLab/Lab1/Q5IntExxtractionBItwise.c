#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b1=a & 0xFF;
    int b2=(a>>8) & 0xFF;
    int b3=(a>>16) & 0xFF;
    int b4=(a>>24) & 0xFF;
    printf("b1: %d \n b2: %d \n b3: %d \n b4: %d",b1,b2,b3,b4);


}