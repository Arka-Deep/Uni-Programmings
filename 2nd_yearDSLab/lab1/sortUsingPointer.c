#include <stdio.h>
#include <stdlib.h>

void swap(int* arr,int n){
    for(int i=0;i<n-1;i++){
        int flag=1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
        if(flag)
            break;
    }
    

}
int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter element for index %d : ",i);
        scanf("%d",&arr[i]);
    }

    swap(arr,n);
    printf("The Array after Sorting \n");

    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
        
    }
    printf("\n");

}