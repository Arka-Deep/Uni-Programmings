#include <stdio.h>
int main(){
    int arr[][4]={{0,2,0,4},{5,0,7,0},{9,0,4,5},{7,0,3,0}};
    int m=4,n=4;
    int cnt=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                cnt++;
            }
        }
    }
    int sp[cnt+1][3];
    sp[0][0]=m;
    sp[0][1]=n;
    sp[0][2]=cnt;
     for(int i=0,k=1;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                sp[k][0]=i;
                sp[k][1]=j;
                sp[k][2]=arr[i][j];
                k++;
            }
        }
    }
    for(int i=0;i<=cnt;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sp[i][j]);
        }
        printf("\n");
    }

}