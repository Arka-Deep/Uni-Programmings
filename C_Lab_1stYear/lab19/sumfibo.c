#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;

    }
    return n+sum(n-1);
}

int main(){
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    int s=sum(x);
    printf("The sum till %d is %d\n",x,s);

}
