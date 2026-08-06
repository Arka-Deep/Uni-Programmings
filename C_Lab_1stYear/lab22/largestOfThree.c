#include <stdio.h>
int main(){
    int x,y,z,*ptr1=&x,*ptr2=&y,*ptr3=&z;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&x,&y,&z);
    int max=(*ptr1>*ptr2)?
            (*ptr1>*ptr3)?*ptr1:*ptr3
            :(*ptr2>*ptr3?*ptr2:*ptr3);
    printf("The largest variable is %d\n",max);
}