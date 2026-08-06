#include <stdio.h>
int main(){
	int a,b,temp;
	printf("\nEnter Two numbers: ");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swaping :\nThe value of a is %d \n The value of b is %d ",a,b);
	return 0;
}
