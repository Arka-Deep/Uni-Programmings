#include <stdio.h>
int n;

int nonZero(int arr[][n]){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                cnt++;
            }
        }
    }
    return cnt;

}

int sumAboveDiagonal(int arr[][n]){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==j)
                continue;
            sum+=arr[i][j];
        }
    }

    return sum;
}

void displayBelowMinorDiagonal(int arr[][n]){
    printf("The elements below the minor diagonal are:\n");

    for(int i=0;i<n;i++){
        for(int j=n-i;j<n;j++){
            
            printf("%d ", arr[i][j]);
            
            
        }
        
    }
    printf("\n");
}

int productDiagonal(int arr[][n]){
    int prod=1;
    for(int i=0;i<n;i++){
        if(n%2!=0&&i==(n/2))
            continue;
        prod*=arr[i][i];
    }
    for(int i=0;i<n;i++){
        prod*=arr[i][n-1-i];
    }
    return prod;
}

int main(){
    printf("Enter order of matrix\n");
    //int n;
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter %d integers for the array\n",n*n );
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("The number of non zero numbers is %d \n",nonZero(arr));
     printf("The sum of elemennts above diagonal is %d \n",sumAboveDiagonal(arr));
     displayBelowMinorDiagonal(arr);
     printf("The product of the diagonals is %d\n",productDiagonal(arr));

}