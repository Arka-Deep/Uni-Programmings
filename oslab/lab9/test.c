#include <stdio.h>   
#include <sys/types.h> 
#include <unistd.h>  
#include <sys/wait.h>  

int main(){
    // fork();
    // printf("%d\n",(int)getppid() );

    int pid=(int)fork();

    if(pid==0){
        printf("child\n");
    }else if(pid>0){
        wait(NULL);
        printf("parent\n");
    }


}