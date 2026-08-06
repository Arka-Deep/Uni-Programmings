#include <stdio.h>
void pr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter size of matrix ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Printing Original array\n");
    pr(arr,n);

    //partitioning all odd to left

    // for(int i=0,j=0;i<n;i++){
    //     if(arr[i]%2==0){
    //         //if num is even , move ahead i
            
    //     }else{
    //         //if num is odd , swap val at i anf j , move i and j by one
    //         //swap
    //         int temp =arr[i];
    //         arr[i]=arr[j];
    //         arr[j]=temp;
    //         j++;

    //     }
    // }

    for(int i=0,j=0;i<n;i++){
        if(arr[i]%2!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }



    printf("Printing after partition \n");
    pr(arr,n);



}