#include <stdio.h>
int main(){
	float base,da,hra,sal;
	printf("\nenter your base salary: ");
	scanf("%f",&base);
	da=0.30;
	hra=0.25;
	sal=base+(base*da)+(base*hra);
	printf("\nThe final salary is :%.2f ",sal);
	return 0;
}
