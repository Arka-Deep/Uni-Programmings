#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    printf("MAIN:  PID: %d , PPID: %d \n", getpid(), getppid());

    int n = 2;
    int i = 1;



    for (i = 1; i <= n; i++)
    {
        int pid = (int)fork();
        if (pid == 0)
        {
            printf("Child %d executed PID: %d , PPID: %d \n", i, getpid(), getppid());
        }
        else if (pid > 0)
        {
            wait(NULL);
            break;
        }
    }
   // printf("-----------------------------------------------------------\n");

    // while (1)
    // {
    //     if (i > n)
    //     {
    //         return 0;
    //     }
    //     int pid = (int)fork();
    //     if (pid == 0)
    //     {
    //         printf("Child %d executed PID: %d , PPID: %d \n", i, getpid(), getppid());
    //         // return 0;
    //     }
    //     else if (pid > 0)
    //     {
    //         wait(NULL);
    //         break;
    //         // printf("Parent wait for  Child %d finished:   PID: %d , PPID: %d\n",i,getpid(),getppid());
    //     }
    //     i++;
    // }

    // printf("-----------------------------------------------------------\n");
    // // same thing but using for loop

    
}