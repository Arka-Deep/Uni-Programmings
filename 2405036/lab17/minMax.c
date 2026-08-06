#include <stdio.h>
int min(int arr[],int len){
    int min=arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int max(int arr[],int len){
    int max=arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
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

    int minimum=min(arr,n);
    int maximum=max(arr,n);
    printf(" The maximum is = %d and minimum is %d\n",maximum,minimum);

}