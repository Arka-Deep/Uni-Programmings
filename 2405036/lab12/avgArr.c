#include <stdio.h>
int main(){
    printf("Enter Size of array\n");
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element for index %d : ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("The average is %.2f\n",(float)sum/n);
    return 0;
}