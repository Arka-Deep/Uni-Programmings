#include <stdio.h>
typedef struct process
{
    int pid;
    int at;
    int bt;
    int rem_bt;
    int ct;
    int tat;
    int wt;
} process;
int main()
{
    int n, quantum, completed = 0, current_time = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    process p[n];
    for (int i = 0; i < n; i++)
    {
        p[i].pid = i + 1;
        printf("Enter Arrival Time and Burst Time for P%d: ", p[i].pid);
        scanf("%d %d", &p[i].at, &p[i].bt);
        p[i].rem_bt = p[i].bt;
    }
    printf("Enter Time Quantum: ");
    scanf("%d", &quantum);
    while (completed < n)
    {
        int idle = 1;
        for (int i = 0; i < n; i++)
        {
            if (p[i].at <= current_time && p[i].rem_bt > 0)
            {
                idle = 0;
                if (p[i].rem_bt > quantum)
                {
                    current_time += quantum;
                    p[i].rem_bt -= quantum;
                }
                else
                {
                    current_time += p[i].rem_bt;
                    p[i].ct = current_time;
                    p[i].tat = p[i].ct - p[i].at;
                    p[i].wt = p[i].tat - p[i].bt;
                    p[i].rem_bt = 0;
                    completed++;
                }
            }
        }
        if (idle)
        {
            current_time++;
        }
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }
    return 0;
}