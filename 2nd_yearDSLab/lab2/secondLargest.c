#include <stdio.h>
int main(){
	//2nd largest
	int n;
	printf("Enter size of Array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements for the array\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int lar=arr[0],lar2=-1;
	for(int i=1;i<n;i++){
		if(arr[i]>lar){
			lar2=lar;
			lar=arr[i];
			
		}
		if(arr[i]>lar2 && arr[i]<lar){
			lar2=arr[i];
		}
		
	}
	printf("The Second Largest Element is %d\n",lar2);


}
