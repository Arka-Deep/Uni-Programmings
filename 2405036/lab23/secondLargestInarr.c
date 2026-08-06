#include <stdio.h>
int secLar(int *ptr,int size){
    int lar=*ptr,lar2=*ptr;

    for(int i=0;i<size;i++){
        if(*(ptr+i)>lar){
            lar2=lar;
            lar=*(ptr+i);
        }else if(*(ptr+i)>lar2 && *(ptr+i)<lar){
            lar2=*(ptr+i);

        }

    }
    return lar2;

}

int main(){
    int x;
    printf("Enter size of array\n");
    scanf("%d",&x);
    int arr[x],*ptr=arr;
    for(int i=0;i<x;i++){
        printf("Enter element %d\n",i+1);
        scanf("%d",ptr+i);
    }
    int secondLar=secLar(arr,x);
    printf("The Second Largest Number is %d\n",secondLar);
   

}