#include <stdio.h>
int main(){
	int a;
	printf("\nEnter a number:\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("A is even\n ");
	}
	else{
		printf("A is odd\n ");
	}
	return 0;
}
