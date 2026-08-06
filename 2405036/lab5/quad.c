#include <math.h>
#include <stdio.h>
int main(){
	float a,b,c;
	printf("\nEnter value of a,b,c for a quadratic\n");
	scanf("%f%f%f",&a,&b,&c);
	float dis=0;
	if(a==0&&b==0){
		printf("\nNot an Equation");
	}
	else {
		if(a==0){
		printf("the solution is X = %f",(float)-c/b);
				
		}else{
			dis=(b*b)-(4*a*c);
			if(dis>0){
				printf("the roots are %f and %f",(float)(-b+sqrt(dis))/(2*a),(float)(-b-sqrt(dis))/(2*a));
				
			}else{
				float real,img;
				real=(float)-b/(2*a);
				img=sqrt(-dis)/(2*a);
				
				printf("The roots are %f+i%f and %f-i%f",real,img,real,img);
			}
		}
	
	}
	return 0;
}
