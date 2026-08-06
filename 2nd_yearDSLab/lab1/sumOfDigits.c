#include <stdio.h>
int sumDigit(int* n){
	int ld,sum=0;
	while(*n){
		ld=*n%10;
		*n/=10;
		sum+=ld;
	}
	return sum;
}
int main(){
	printf("Enter a Number");
	int num;
	scanf("%d",&num);
	printf("The sum od digits is %d\n",sumDigit(&num));
}
