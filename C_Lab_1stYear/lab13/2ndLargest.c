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
    int max=arr[0],max2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }
    }

    printf("The maximum was found to be %d and 2nd largest was %d\n",max,max2);
    
    return 0;
}
