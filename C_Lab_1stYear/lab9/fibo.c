#include <stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    int a=0,b=1,c=a;
    for(int i=1;i<=input;i++){
        printf("%d\n",c);
        a=b;
        b=c+a;
        c=a;
    }
}