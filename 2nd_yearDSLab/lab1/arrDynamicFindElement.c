#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("Enter size of array\n");
	int n,k;
	int* ptr;
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Enter element %i :",i);
		scanf("%d",&ptr[i]);
	}
	printf("Enter element to be searched\n");
	scanf("%d",&k);
	for(int i=0;i<n;i++){
		if(ptr[i]==k){
			printf("The element was found at index %d\n",i);
			return 0;
		}
	}
	printf("The element was not found\n");
}

	
