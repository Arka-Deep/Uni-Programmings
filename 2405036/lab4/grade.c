#include <stdio.h>
int main(){
	int a;
	printf("\nEnter Marks obtained:\n");
	scanf("%d",&a);

	if(a>=90 ){
		printf("\nGrade : O");
	}
	else if(a>=80){
		printf("\nGrade : E");
	}
	else if(a>=70){
		printf("\nGrade : A");
	}
	else if(a>=60){
		printf("\nGrade : B");
	}
	else if (a>=50){
		printf("\nGrade : C");
	}
	else if(a>=40){
		printf("\nGrade : D");
		
	}
	else {
		printf("Fail");
	}
	return 0;
}
