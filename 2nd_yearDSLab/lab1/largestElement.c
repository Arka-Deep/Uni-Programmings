#include <stdio.h>
int main(){
    printf("Enter the size of Array\n");
    int n,lar;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter interger for element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    lar=arr[0];
    for(int i=1;i<n;i++){
        if(lar<arr[i]){
            lar=arr[i];
        }
    }
    printf("The Largest Number is %d\n",lar);



}