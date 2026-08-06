#include <stdio.h>
int main(){

    for(int num=1;num<=1000;num++){
        int cnt=0;
    
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
             cnt++;
                break;
            }
        }
        
        if(cnt==0){
            printf("%d\t",num);
        }
   
    }


    return 0;
}