#include <stdio.h>
int main(){
    int n,exp=1;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        exp=exp*2;
        printf("%d\t",exp-1);
    }
   

}