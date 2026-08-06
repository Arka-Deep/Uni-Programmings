#include <stdio.h>   
#include <unistd.h>  
#include <sys/wait.h>  


int main(){
    printf("MAIN:  PID: %d , PPID: %d \n",getpid(),getppid());
    for(int i=1;i<=3;i++){
        int pid=(int)fork();
        if(pid==0){
            //sleep(1);
            printf("Child %d executed PID: %d , PPID: %d \n",i,getpid(),getppid());
            //sleep(1);
            
          // printf("Sleep completed for %d \n",i);
            return 0;
        }
    }
 //printf("main completd\n");
    
    for(int i=1;i<=3;i++){
        wait(NULL);
    }
   printf("AT LAST  PID: %d , PPID: %d \n",getpid(),getppid());


}