#include <stdio.h>
int main(){
	float fer,cel;
	printf("\nEnter temperature in farnheight: ");
	scanf("%f",&fer);
	cel=(fer-32)*(5.0/9);
	printf("\nThe temperature in celcius is: %fcelcius ",cel);
	return 0;
}
