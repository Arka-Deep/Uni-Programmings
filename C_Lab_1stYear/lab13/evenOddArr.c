#include <stdio.h>
int main(){
    int arr[10];
    int odd=0,even=0;

    for(int i=0;i<10;i++){
        printf("Enter %dth element\n",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even++;
        else
            odd++;

    }

    printf("The Number of even nos are %d\n",even);
    printf("The Number of odd nos are %d\n",odd);



}