#include <stdio.h>
int main(){
    int i,j,sum=0;
    printf("Enter order of matrix\n");
    scanf("%d",&j);
    i=j;
    
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

    for(int k=0;k<i;k++){
        sum+=arr[k][j-1-k];
    }

    printf("Sum of 2nd diagonal is %d \n",sum);


  
    
}