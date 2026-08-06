#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{

    printf("MAIN:  PID: %d , PPID: %d \n", getpid(), getppid());
    int pid1 = (int)fork();
    if (pid1 == 0)
    {
        printf("Child  executed PID: %d , PPID: %d \n",getpid(),getppid());
        for(int i=1;i<=2;i++){
            int pid2=(int)fork();
            if(pid2==0){
                printf("Child  executed PID: %d , PPID: %d \n",getpid(),getppid());
                return 0;

            }else{
                wait(NULL);
            }
        }

    }
    else
    {
        int pid3=(int)fork();
        if(pid3==0){
            printf("Child  executed PID: %d , PPID: %d \n",getpid(),getppid());
            return 0;
        }else{
           wait(NULL); 
        }
        wait(NULL);


    }
}