//WAP to sort rows of a matrix having m rows and n columns in ascending & columns in descendng order
#include <stdio.h>

int main(){
    printf("Enter row and column of matrix\n");
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter %d integers for the array\n",m*n );
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }


     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
 printf(".......................\n");

    //sort each row in ascending order
    for(int i=0;i<m;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            flag=1;
            for(int k=0;k<n-1-j;k++){
                if (arr[i][k]>arr[i][k+1]){
                    //swap
                    int temp=arr[i][k];
                    arr[i][k]=arr[i][k+1];
                    arr[i][k+1]=temp;
                    flag=0;
                }
            }
            if(flag){
                break;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

  
}