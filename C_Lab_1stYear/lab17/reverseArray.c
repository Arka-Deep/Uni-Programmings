#include <stdio.h>
void rev(int arr[],int len){
    for(int i=0,j=len-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

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
     rev(arr,n);
     printf("Reversed array is\n");
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        
    }
    printf("\n");

     
    
}