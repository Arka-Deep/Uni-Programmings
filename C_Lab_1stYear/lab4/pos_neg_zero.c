#include <stdio.h>
int main(){
	int a;
	printf("\nEnter a number:\n");
	scanf("%d",&a);
	if(a>0){
		printf("The Number is positive\n");
		
	}
	else if (a<0){
		printf("The number is negative\n");
		
	}
	else {
		printf("the Number is zero\n");
	}

	return 0;
}
