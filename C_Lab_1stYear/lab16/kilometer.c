#include <stdio.h>
void convert(){
	int m,km;
	printf("\nEnter distance in meters: ");
	scanf("%d",&m);
	km=m/1000;
	m=m%1000;

	printf("the distance is %dkm %dmeters\n",km,m);
	return ;
}

int main(){
    convert();
}
