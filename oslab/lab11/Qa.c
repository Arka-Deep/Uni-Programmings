#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    printf("MAIN:  PID: %d , PPID: %d \n", getpid(), getppid());

    for(int i=1;i<=3;i++){
        int pid=(int)fork();
        if(pid==0){
            printf("Child  executed PID: %d , PPID: %d \n",getpid(),getppid());
            if(i==3){
                int pid2=(int)fork();
                if(pid2==0){
                     printf("Child  executed PID: %d , PPID: %d \n",getpid(),getppid());
                     return 0;
                }else{
                    wait(NULL);
                }
            }
            return 0;
        }else{
            wait(NULL);
        }
    }
}