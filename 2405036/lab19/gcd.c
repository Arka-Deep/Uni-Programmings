#include <stdio.h>
int gcd(int rem ,int divisor ){
    if(rem==0){
        return divisor;
    }

    int ans=gcd(divisor%rem,rem);
    return ans;
    
}

int main(){
    int a,b;
    printf("Enter two Numbers ");
    scanf("%d %d",&a,&b);

    printf("The GCD is %d \n",gcd(a,b));
}
