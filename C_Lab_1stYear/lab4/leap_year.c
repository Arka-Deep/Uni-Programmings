#include <stdio.h>
int main(){
	int y;
	printf("\nEnter Year:\n");
	scanf("%d",&y);
	if((y%4==0 && y%100!=0)||y%400==0 ){
		printf("%d is a Leap Year\n",y);
	}
	else{
		printf("%d is not a Leap Year\n",y);
	}
	return 0;
}
