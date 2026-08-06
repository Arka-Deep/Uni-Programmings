#include <stdio.h>
int main(){
	int a,b,c;
	printf("\nEnter three sides of a triangle:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b){
		if(a==b && b==c){
			printf("It is an Equilateral Triangle");
		}
		else if (a==b||b==c||c==a){
			printf("It is an Isosceles Triangle");
		}
		else{
			printf("Its a Scalene Triangle");
		}
	}
	else{
		printf("It is not a Triangle\n ");
	}
	return 0;
}
