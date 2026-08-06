#include <stdio.h>
int main(){
	float rad,area;
	printf("\nEnter radius of circle: ");
	scanf("%f",&rad);
	area = 3.14*rad*rad;
	printf("\nThe radius of the circle is: %f ",area);
	return 0;
}
