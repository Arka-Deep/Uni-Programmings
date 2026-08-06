#include <stdio.h>

void tp(int arr[][3],int tp[][3],int nz){

    tp[0][0]=arr[0][1];
    tp[0][1]=arr[0][0];
    tp[0][2]=arr[0][2];
    int k=1;
    for(int i=0;i<arr[0][1];i++){
        for(int j=1;j<=nz;j++){
            if(arr[j][1]==i){
                tp[k][0]=arr[j][1];
                tp[k][1]=arr[j][0];
                tp[k][2]=arr[j][2];
                

                k++;

            }
        }
    }
    

}

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
    int tr[nz+1][3];
    tp(arr,tr,nz);

  for(int i=0;i<=nz;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
            }
        printf("\n");
    }
printf("---------------------\n");

    for(int i=0;i<=nz;i++){
        for(int j=0;j<3;j++){
            printf("%d ",tr[i][j]);
            }
        printf("\n");
    }



}