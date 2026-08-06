#include <stdio.h>
int main(){

    int r1,c1,r2,c2;
    printf("Enter row and column\n");
    scanf("%d %d",&r1,&c1);

    printf("Enter row and column of 2nd matrix\n");
    scanf("%d %d",&r2,&c2);

    if(c1!=r2){
        printf("Matrix Multiplication not possible \n");
        return 0;
    }


    int arr[r1][c1];
    int arr2[r2][c2];
    int multi[r1][c2];

    for(int k=0;k<r1;k++){
        for(int l=0;l<c1;l++){
            printf("Enter value for [%d][%d] ",k,l);
            scanf("%d",&arr[k][l]);
        }
    }

    for(int k=0;k<r2;k++){
        for(int l=0;l<c2;l++){
            printf("Enter value for [%d][%d] in 2nd matrix ",k,l);
            scanf("%d",&arr2[k][l]);
        }
    }



    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int temp =0;
            for(int k=0;k<c1;k++){
                temp=temp+(arr[i][k]*arr2[k][j]);
            }
            multi[i][j]=temp;
        }
    }


    printf("The required matrix is \n");

    for(int k=0;k<r1;k++){
        for(int l=0;l<c2;l++){
            printf("%d ",multi[k][l]);
            
        }
        printf("\n");
    }

  
    
}