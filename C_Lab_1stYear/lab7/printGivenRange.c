#include <stdio.h>
int main(){
    int x,y;
    printf("Enter lower range and upper range\n");
    scanf("%d%d",&x,&y);
    for (int i=x;i<=y;i++){
        printf("%d\t",i);
    }
   

}