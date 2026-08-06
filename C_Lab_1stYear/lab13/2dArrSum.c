#include <stdio.h>
int main(){
    int i,j;
    printf("Enter row and column\n");
    scanf("%d %d",&i,&j);
    int arr[i][j];
    int arr2[i][j];
    int sum[i][j];
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("Enter value for [%d][%d] ",k,l);
            scanf("%d",&arr[k][l]);
        }
    }

    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("Enter value for 2nd array [%d][%d] ",k,l);
            scanf("%d",&arr2[k][l]);
        }
    }


    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            sum[k][l]=arr[k][l]+arr2[k][l];
        }
    }





    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("%d ",arr[k][l]);
            
        }
        printf("\n");
    }
    printf("--------------\n");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("%d ",arr2[k][l]);
            
        }
        printf("\n");
    }
    printf("--------------\n");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("%d ",sum[k][l]);
            
        }
        printf("\n");
    }
  
  
    
}