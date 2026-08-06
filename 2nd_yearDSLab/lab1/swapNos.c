#include <stdio.h>
void swap(int* x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
int main(){
    printf("Enter two Numbers\n");
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Value Before Swapping: X= %d , Y= %d\n",x,y);
    swap(&x,&y);
    printf("Value After Swapping: X= %d , Y= %d\n",x,y);


}