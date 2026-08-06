#include <stdio.h>
int main(){
    int arr[]={1,4,3,9,2,33,5};
    int len=sizeof(arr)/sizeof(int);
    printf("The array in reverse order: \n Note the array isnt reversed on its displayed in reverse\n");

    for(int i=len-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n ");
}