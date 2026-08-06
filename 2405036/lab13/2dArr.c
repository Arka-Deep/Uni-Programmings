#include <stdio.h>
int main(){
    int i,j;
    printf("Enter row and column\n");
    scanf("%d %d",&i,&j);
    int arr[i][j];
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("Enter value for [%d][%d] ",k,l);
            scanf("%d",&arr[k][l]);
        }
    }

    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("%d ",arr[k][l]);
            
        }
        printf("\n");
    }
  
    
}