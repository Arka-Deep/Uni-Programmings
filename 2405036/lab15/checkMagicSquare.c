#include <stdio.h>


int main(){

    int n,flag=1;
    printf("Enter order of matrix \n");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter value for [%d][%d]\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    while(1){
    //check diagonal
    int sumd1=0,sumd2=0;
    for(int i=0;i<n;i++){
        sumd1+=arr[i][i];
        sumd2+=arr[i][n-1-i];
    }
    if(sumd1!=sumd2){
        flag=0;
        break;
    }

    //check row &col
    for(int i=0;i<n;i++){
        int sumcol=0,sumrow=0;
        for(int j=0;j<n;j++){
            sumrow+=arr[i][j];
            sumcol+=arr[j][i];
        }
        if(sumd1!=sumrow||sumcol!=sumrow){
            flag=0;
            break;
        }

       
    }

   
    break;


}
if(flag){
    printf("It is a Magic matrix\n");
}else{
    printf("Not a magic matrix\n");
}


    

}