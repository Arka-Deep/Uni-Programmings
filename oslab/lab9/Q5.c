#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    printf("MAIN:  PID: %d , PPID: %d \n", getpid(), getppid());

    int pid = (int)fork();
    if (pid == 0)
    {
        printf("Child 1 : PID: %d ,  PPID: %d \n", getpid(), getppid());
        pid = fork();
        if (pid == 0)
        {
            printf("Child 3: PID:%d ,  PPID: %d  \n", getpid(), getppid());
        }
        else
        {
            wait(NULL);
            return 0;
        }
    }
    else if (pid > 0)
    { // wait(NULL);
        pid = (int)fork();
        if (pid == 0)
        {
            printf("Child 2 : PID:%d ,  PPID: %d  \n", getpid(), getppid());

            for (int i = 4; i <= 5; i++)
            {
                pid = (int)fork();
                if (pid == 0)
                {
                    printf("Child %d  PID: %d  , PPID:  %d\n", i, getpid(), getppid());
                    break;
                }
                else
                {
                    // wait(NULL);
                }
            }
        }
        else
        {
            wait(NULL);
        }
    }
}