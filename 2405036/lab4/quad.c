#include <math.h>
#include <stdio.h>
int main(){
	float a,b,c;
	printf("\nEnter value of a,b,c for a quadratic\n");
	scanf("%f%f%f",&a,&b,&c);
	if (a==0){
		printf("\nNot a quadratic");
	}
	else{
		float dis = pow(b,2)-(4*a*c);
		float x,y= 0;
		if (dis<0){
			printf("\nNo real values");
		}
		else if(dis==0){
			printf("\nHas one real value");
			x=(float)(-b)/(2*a);
			printf("\nThe root is : %f",x);
		}
		else{
			printf("\nThe equation has two roots");
			x=(-b+sqrt(dis))/(2*a);
			y=(-b-sqrt(dis))/(2*a);
			printf("\nThe Roots are: %f and %f",x,y);
		}
	}
	return 0;
}
