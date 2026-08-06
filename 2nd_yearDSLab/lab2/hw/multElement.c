#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("Enter size of Array\n");
	int n;
	scanf("%d",&n);
	//int *arr=(int*)(malloc(n*sizeof(int)));
	int *arr=(int*)(calloc(5,sizeof(int)));
	if (arr == NULL) {
        printf("Allocation Failed");
        exit(0);
    }
	printf("Enter %d elements for the array",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	

    for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");
    

    int prev=1,nxt=1;
    for(int i=0;i<n;i++){
        if(i<n-1){
            nxt=arr[i+1];
        }else{
            nxt=1;
        }
        int temp=prev*nxt;
        prev=arr[i];
        arr[i]=temp;
    }



	for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");


	
}
