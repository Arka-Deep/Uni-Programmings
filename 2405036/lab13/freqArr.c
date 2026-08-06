#include <stdio.h>
int main(){
    printf("Enter Size of array\n");
    int n,find,val=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element for index %d : ",i);
        scanf("%d",&arr[i]);
      
    }


    printf("enter element to be searched\n");
    scanf("%d",&find);
    for(int i=0;i<n;i++){
        if(arr[i]==find){
           val++;
        }
    }
    printf("the element was found %d times\n",val);
    return 0;
}