#include <stdio.h>

int main(){
    int num,x=1;
    printf("Enter value of n\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}