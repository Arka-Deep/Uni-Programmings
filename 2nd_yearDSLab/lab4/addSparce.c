#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter size of matric (row,col) and number of elements to be inserted\n");
    int r,c,nz;
    scanf("%d %d %d",&r,&c,&nz);
    int arr[nz+1][3];
    arr[0][0]=r;
    arr[0][1]=c;
    arr[0][2]=nz;
    for(int i=1;i<=nz;i++){
        printf("Enter row,col and value\n");
        scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);


    }
    printf("Enter size of matric (row,col) and number of elements to be inserted for second matrix\n");
    int r2,c2,nz2;
    scanf("%d %d %d",&r2,&c2,&nz2);
    int arr2[nz2+1][3];
    arr2[0][0]=r2;
    arr2[0][1]=c2;
    arr2[0][2]=nz2;
    for(int i=1;i<=nz2;i++){
        printf("Enter row,col and value\n");
        scanf("%d %d %d",&arr2[i][0],&arr2[i][1],&arr2[i][2]);


    }
    if(r!=r2||c!=c2){
        exit(0);

    }
    int sum[nz+nz2+1][3];
    sum[0][0]=r;
    sum[0][1]=c;
    int i=1,j=1,k=1;
    while(i<=nz&&j<=nz2){
        if(arr[i][0]==arr2[j][0]){//row equality check
            if(arr[i][1]==arr2[j][1]){//column equality check
                sum[k][0]=arr[i][0];
                sum[k][1]=arr[i][1];
                sum[k][2]=arr[i][2]+arr2[j][2];
                k++;
                i++;
                j++;
            }else{//row same col diff
                //copying the one with the lowest index 
                if(arr[i][1]>arr2[j][1]){//arr2 col is smaller
                    sum[k][0]=arr2[j][0];
                    sum[k][1]=arr2[j][1];
                    sum[k][2]=arr2[j][2];
                    k++;
                    j++;
                }else{//arr1 col is smaller
                    sum[k][0]=arr[i][0];
                    sum[k][1]=arr[i][1];
                    sum[k][2]=arr[i][2];
                    k++;
                    i++;

                }

            }
        }else{//if row not same
            //copying smaller row
            if(arr[i][0]>arr2[j][0]){//arr2 row is smaller
                sum[k][0]=arr2[j][0];
                sum[k][1]=arr2[j][1];
                sum[k][2]=arr2[j][2];
                k++;
                j++;

            }else{//arr1 row is smaller
                sum[k][0]=arr[i][0];
                sum[k][1]=arr[i][1];
                sum[k][2]=arr[i][2];
                k++;
                i++;

            }

        }
    }

    // copying anything that is left in the two arrays
    while(i<=nz){
        sum[k][0]=arr[i][0];
        sum[k][1]=arr[i][1];
        sum[k][2]=arr[i][2];
        k++;
        i++;
    }

    while(j<=nz2){
        sum[k][0]=arr2[j][0];
        sum[k][1]=arr2[j][1];
        sum[k][2]=arr2[j][2];
        k++;
        j++;

    }
    k--;//as it shifts to one ahead but since this was the last one we lower it by one
    sum[0][2]=k;

    printf("\n--------------------------------\n");
    for(int i=0;i<=nz;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n--------------------------------\n");
    for(int i=0;i<=nz2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n--------------------------------\n");
    for(int i=0;i<=k;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}