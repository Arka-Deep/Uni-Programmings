#include <stdio.h>

void bubbleSort(int arr[],int len){
    int flag=1;
    for(int i=0;i<len-1;i++){
        flag=1;
        for(int j=0;j<len-i-1;j++){
            
            if(arr[j]>arr[j+1]){
                //swap
                flag=0;
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
        if(flag){
            return;
        }
    }

    return;
}
int main(){
    printf("Enter Size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printf("The sorted array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        
    }
    printf("\n");


}