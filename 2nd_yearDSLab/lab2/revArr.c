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
	printf("The Reversed array\n");
	int i=0,j=n-1;
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");


	
}
