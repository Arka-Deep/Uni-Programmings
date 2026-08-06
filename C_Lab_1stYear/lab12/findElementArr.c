#include <stdio.h>
int main(){
    printf("Enter Size of array\n");
    int n,find,flag=0,idx;
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
            flag=1;
            idx=i;
            break;
        }
    }
    if(flag)
        printf("The Element %d was found at index %d\n",find,idx);
    else    
        printf("the element was not found\n");

    return 0;
}