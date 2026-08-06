#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    printf("MAIN:  PID: %d , PPID: %d \n", getpid(), getppid());

    // int pid=(int)fork();
    int n = 2;
    for (int i = 1; i <= n; i++)
    {
        int pid = (int)fork();
        if (pid == 0)
        {
            printf("Child %d executed PID: %d , PPID: %d \n", i, getpid(), getppid());
            return 0;
        }
        else if (pid > 0)
        {
            // wait(NULL);
            // printf("Parent wait for  Child %d finished:   PID: %d , PPID: %d\n",i,getpid(),getppid());
        }
    }

    for (int i = 1; i <= n; i++)
    {
        wait(NULL);
    }
}