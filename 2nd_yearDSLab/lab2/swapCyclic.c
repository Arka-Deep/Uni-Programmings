#include <stdio.h>
void swap(int* a,int* b ,int* c){
    int temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
    
}
int main(){
    printf("Enter 3 numbers \n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Values before swaping \n a= %d, b=%d ,c=%d\n",a,b,c);
    swap(&a,&b,&c);
    printf("Values after swaping \n a= %d, b=%d ,c=%d\n",a,b,c);
    
}