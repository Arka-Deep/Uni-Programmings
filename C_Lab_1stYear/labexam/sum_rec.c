#include <stdio.h>
int add(int n){
    if(n==1){
        return 1;
    }
    int sum=n+add(n-1);
    return sum;

}
int main(){
    int n;
    printf("Enter value of N \n");
    scanf("%d",&n);
    printf("The sum till %d is %d\n",n,add(n));
    return 0;
    
}