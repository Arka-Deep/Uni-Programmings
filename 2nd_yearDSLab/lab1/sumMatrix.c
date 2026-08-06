#include <stdio.h>
int main(){
    int n;
    printf("Enter order of Matrix\n");
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n],arr3[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element [%d][%d] for 1st matrix : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element [%d][%d] for 2nd matrix : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    //printing result
    printf("The sum of both arrays is\n");
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    

}