#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter size of Array\n");
	int n;
	scanf("%d",&n);
	int *arr=(int*)(malloc(n*sizeof(int)));
	printf("Enter %d elements for the array\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    
for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
				//printf("arr j = %d  arr i = %d\n",arr[j],arr[i]);
				//ans[i]=arr[j];
                arr[i]=arr[j];
				break;
			}
        }
    }

	//printing
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	
}
