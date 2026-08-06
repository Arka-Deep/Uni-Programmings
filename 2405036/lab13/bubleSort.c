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
    
     //sorting
     for(int i=0;i<n-1;i++){
        int flag=1;
        for(int j=0;j<n-1-i;j++){
            
            if(arr[j]>arr[j+1]){
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
        if(flag)
            break;
     }

     for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
        
     }

printf("\n");
return 0;

}
     