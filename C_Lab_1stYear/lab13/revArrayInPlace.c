#include <stdio.h>
int main(){
    printf("Enter Size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element for index %d : ",i);
        scanf("%d",&arr[i]);
     }
     
     for(int low =0,high=n-1;low<high;low++,high--){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
     }

     for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
        
     }
}