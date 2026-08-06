#include <stdio.h>
int main(){
    int i,j,flag=1;
    printf("Enter order of matrix\n");
    scanf("%d",&i);
    j=i;
    int arr[i][j];
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("Enter value for [%d][%d] ",k,l);
            scanf("%d",&arr[k][l]);
        }
    }

    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            if(arr[k][l]!=arr[l][k]){
                flag=0;
                break;
            }
        }
    }



    if(flag){
        printf("It is a Symmetric matrix ");
    }else{
        printf("Not a symmetric Matrix");
    }

}