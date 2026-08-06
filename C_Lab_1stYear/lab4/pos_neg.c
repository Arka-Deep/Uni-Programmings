#include <stdio.h>
int main(){
	int a;
	printf("\nEnter a number:\n");
	scanf("%d",&a);
	if(a>0){
		printf("The Number is positive");
		
	}
	else if (a<0){
		printf("The number is negative");
	}

	return 0;
}
