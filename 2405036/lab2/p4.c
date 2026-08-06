#include <stdio.h>
int main(){
	char c[10];
	int age;
	printf("Enter Your Name :\n");
	scanf("%s",c);
	printf("Enter your age:\n");
	scanf("%d",&age);
	printf("Welcome %s\nYour age is : %d\n",c,age);
	return 0;
}
