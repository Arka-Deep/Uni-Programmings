#include <stdio.h>
#include <stdlib.h>
void swap(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main(int argc,char *argv[]){
    // zero idx has the file name
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);

    printf("The Values before swapping: \n A= %d B= %d",a,b);
    swap(&a,&b);
    printf("\nValues after swaping: \n A= %d B= %d \n",a,b);


}