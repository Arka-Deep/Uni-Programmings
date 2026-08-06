#include <stdio.h>


void dispRow(int arr[][3],int m,int n){
    printf("Row wise printing \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void dispCol(int arr[][3],int m,int n){
    printf("Column wise printing \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    
}
// void printBound(int arr[][3],int m,int n){
//     printf("Boundry printing \n");
//     //left boundry
//     for(int i=0;i<m;i++){
//         printf("%d ",arr[i][0]);
//     }
//     //bottom bound 
//     for(int i=1;i<n;i++){
//         printf("%d ",arr[m-1][i]);
//     }
//     //right bound
//     for(int i=m-2;i>=0;i--){
//         printf("%d ",arr[i][n-1]);
//     }
//     //top bound
//     for(int i=n-2;i>0;i--){
//         printf("%d ",arr[0][i]);

//     }
//     printf("\n");

// }

void printBound(int arr[][3],int m,int n){
    printf("Boundry printing \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==m-1||j==n-1){
                printf("%d ",arr[i][j]);
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
  
    printf("\n");

}

void printDiagonal(int arr[][3],int m){

    printf("The diagonals are \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j||i==m-j-1){
                printf("%d ",arr[i][j]);
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    printf("\n");
    
}


// void printDiagonal(int arr[][3],int n){

//     printf("The diagonals are \n");
//     for(int i=0;i<n;i++){
//         if(n%2!=0&&i==(n/2))
//             continue;
//         printf("%d ",arr[i][i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i][n-1-i]);
//     }
//     printf("\n");
    
// }


int main(){
    int arr[][3]={{1,4,3},{9,2,33},{5,4,9}};
    dispRow(arr,3,3);
    dispCol(arr,3,3);
    printBound(arr,3,3);
    //diagonals printing only for square matrix
    printDiagonal(arr,3);
   
}