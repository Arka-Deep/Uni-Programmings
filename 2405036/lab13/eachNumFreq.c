#include <stdio.h>
int main(){
    printf("Enter Size of array\n");
    int n,find,val=0;
    scanf("%d",&n);
    int arr[n];
    int check[n];



    for(int i=0;i<n;i++){
        printf("Enter element for index %d : ",i);
        scanf("%d",&arr[i]);
        check[i]=0;

    }

    for(int i=0;i<n;i++){
        int count =1;

        if(check[i])
            continue;

        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                check[j]=1;
            }

        }
        printf("%d was found %d time(s)\n",arr[i],count);
    }

    
    

    return 0;
}