#include <stdio.h>
int main(){
	int m,km;
	printf("\nEnter distance in meters: ");
	scanf("%d",&m);
	km=m/1000;
	m=m%1000;

	printf("the distance is %dkm %dmeters",km,m);
	return 0;
}
