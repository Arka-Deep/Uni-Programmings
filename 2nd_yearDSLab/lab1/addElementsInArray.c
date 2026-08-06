#include <stdio.h>
int sumArr(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	printf("Enter size of array\n");
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter element at index %d\n",i);
		scanf("%d",&arr[i]);
	}
	printf("The sum of elements is %d\n",sumArr(arr,n));
}

