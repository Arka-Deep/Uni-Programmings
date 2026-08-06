#include <stdio.h>
#include <stdlib.h>
void prnt(int arr[][3]){
    int nz=arr[0][2];
    for(int i=0;i<=nz;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
            }
        printf("\n");
    } 
}

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

    if(arr[0][1]!=arr2[0][0]){
        printf("Multiplication not possible\n");
        exit(0);
    }

    int temp[nz*nz2+1][3];
    temp[0][0]=r;
    temp[0][1]=c2;

    int k=1;

    //transpose of 2nd matrix
    int tpar2[nz2+1][3];
    tp(arr2,tpar2,nz2);

    for(int i=1;i<=nz;i++){
        for(int j=1;j<=nz2;j++){
            if(arr[i][1]==tpar2[j][1]){
                temp[k][0]=arr[i][0];
                temp[k][1]=tpar2[j][0];
                temp[k][2]=arr[i][2]*tpar2[j][2];
                temp[0][2]++;
                k++;
            }
        }
    }


    for(int i=1;i<=temp[0][2];i++){
        for(int j=i+1;j<=temp[0][2];j++){
          if (temp[i][0] == temp[j][0] && temp[i][1] == temp[j][1]) {
                temp[i][2] += temp[j][2];
                // Removeing  the duplicate entry
                for (int l = j; l < temp[0][2]; l++) {
                    temp[l][0] = temp[l+1][0];
                    temp[l][1] = temp[l+1][1];
                    temp[l][2] = temp[l+1][2];
                    }
                temp[0][2]--;
                j--;//to re check the same  [j] element since it is now the next element
             }  
        }
      
    }

    prnt(temp);



    

}