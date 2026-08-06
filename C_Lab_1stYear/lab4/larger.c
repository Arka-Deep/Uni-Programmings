#include <stdio.h>
int main(){
	int a,b;
	printf("\nEnter two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("\nA is greater than B ");
	}
	else{
		printf("B is greater than A ");
	}
	return 0;
}
