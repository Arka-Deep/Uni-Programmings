#include <stdio.h> 
#include <math.h>

int numLen(int num){
    int i=0;
    for(i=0;num!=0;num/=10){
        i++;
    }
    return i;
}

int evenOdd(int num){
    int odd=0;
    int even=0;
    int dig=numLen(num);
    dig--;
    int x=pow(10,dig);
    while(x!=0){
        int fd=num/x;
        num=num%x;
        x/=10;
        if(fd%2==0){
            even=even*10+fd;
        }else{
            odd =odd*10+fd;
        }

    }

    return even*pow(10,numLen(odd))+odd;


}

int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("%d\n",evenOdd(num));
}