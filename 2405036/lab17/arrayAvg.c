#include <stdio.h>
float average(int arr[],int len){
    float sum=0;
    for(int i=0;i<len;i++){
        sum+=arr[i];
    }
    return sum/len;
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
    float avg=average(arr,n);
    printf("The average of the elements are %f\n",avg);
}