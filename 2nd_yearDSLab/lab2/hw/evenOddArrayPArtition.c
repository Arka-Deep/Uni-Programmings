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
	printf("Enter %d elements for the array\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}


    //printing before partition
    for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");

    int i=0,j=0;
    while(i!=n){
        if(arr[i]%2==0){
            //swaping values at i and j
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j++;
        }else{
            i++;
        }

    }

    //printing after partition
    for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");

}