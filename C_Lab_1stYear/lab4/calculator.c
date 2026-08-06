#include <stdio.h>
int main(){
	int y,a,b;
	printf("1 : Add \n2: Subtract \n3:Divide \n4:Multiply\n5:Modulus\n");
	printf("\nEnter Choice: (1/2/3/4/5)\n");
	scanf("%d",&y);
	printf("Enter the two numbers:\n");
	scanf("%d%d",&a,&b);
	if(y==1 ){
		printf("\nAddition :%d",a+b);
	}
	else if(y==2){
		printf("\nSubtraction: %d",a-b);
	}
	else if(y==3){
		printf("\nDivision: %f",(float)a/b);
	}
	else if(y==4){
		printf("\nMultiplication: %d",a*b);
	}
	else if (y==5){
		printf("\nModulus: %d",a%b);
	}
	else{
		printf("\nProper Option Not Selected");
		
	}
	return 0;
}
