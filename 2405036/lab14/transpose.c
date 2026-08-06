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

    int tpose[j][i];
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            tpose[l][k]=arr[k][l];
        }
        
    }
   


    printf("1st array => \n");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("%d ",arr[k][l]);
            
        }
        printf("\n");
    }

    printf("2nd array => \n");
    for(int k=0;k<j;k++){
        for(int l=0;l<i;l++){
            printf("%d ",tpose[k][l]);
            
        }
        printf("\n");
    }
  
    
}