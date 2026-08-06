#include <stdio.h>
int main(){
    int x,y;
    printf("Multiplicstion Table: \n X x Y = Z \n");
    printf("Enter X and Y for multiplication \n");
    scanf("%d%d",&x,&y);
    for (int i=1;i<=y;i++){
        printf("%d X %d = %d \n",x,i,x*i);
    }
   

}