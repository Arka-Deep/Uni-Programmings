#include<stdio.h>
int fac(int);
int main(){
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("The factorial is %d\n",fac(x));

}
int fac(int x){
    if(x<=1)
        return 1;
    int ans=x*fac(x-1);
    return ans;
}
