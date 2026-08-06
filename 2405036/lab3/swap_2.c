#include <stdio.h>
int main(){
	int a,b;
	printf("\nEnter Two numbers: ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swaping :\nThe value of a is %d \n The value of b is %d ",a,b);
	return 0;
}
