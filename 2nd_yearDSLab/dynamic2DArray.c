#include <stdio.h>
#include <stdlib.h>
int main(){
    int m=2,n=2;
    //int* arr[m];
    int** arr;
    arr=(int**)(malloc(m*sizeof(int*)));
    for(int i=0;i<m;i++){
        arr[i]=(int*)(malloc(n*sizeof(int)));
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter element [%d][%d] for 2nd matrix : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }






}