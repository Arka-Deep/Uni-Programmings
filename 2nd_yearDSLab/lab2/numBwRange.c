#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter size of Array\n");
	int n;
	scanf("%d",&n);
	int *arr=(int*)(malloc(n*sizeof(int)));
	printf("Enter %d elements for the array",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int count=0,l,r;
	printf("Enter the lower and upper range",&l,&r);
	scanf("%d %d",&l,&r);
	for(int i=0;i<n;i++){
	if(arr[i]>=l && arr[i]<=r){
        
		count++;
   		 }
	}
	printf("The Number of Numbers in the range are %d\n",count);
}
