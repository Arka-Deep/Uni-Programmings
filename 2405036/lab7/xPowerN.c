#include <stdio.h>
int main(){
    int x,y=1,n;
    printf("Enter value of x and n\n");
    scanf("%d%d",&x,&n);
    for (int i=1;i<=n;i++){
        y*=x;
    }
    printf("The value of X^n = %d\n",y);

}