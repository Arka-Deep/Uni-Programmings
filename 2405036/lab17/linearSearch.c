#include <stdio.h>

int search(int arr[],int num,int k){
    for(int i=0;i<num;i++){
        if(arr[i]==k)
            return i;
    }
    return -1;
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
     printf("Enter element to be searched\n");
     int k;
     scanf("%d",&k);

    int x=search(arr,n,k);
    if(x!=-1){
        printf("The element was found in  index %d\n",x);
    }else{
        printf("The element was not found\n");
    }
}