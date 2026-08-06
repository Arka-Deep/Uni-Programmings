#include <stdio.h>

	int main(){
		int unit;
		float bill;
		printf("Enter units consumed\n");
		scanf("%d",&unit);
		if (unit<=100){
			bill=unit*1.5;
			
		}
		else if (unit<=200){
			bill=150+(unit-100)*3;
			}
			else {
				bill =450+(unit-200)*4.5;
			}
			printf("The bill is Rs. %.2f",bill);
			return 0;
	}

