#include <stdio.h>

int main() {
    int n, q;
    int at[20], bt[20], rt[20];
    int ct[20], tat[20], wt[20];
    int i, time = 0, completed = 0;

    float avg_tat = 0, avg_wt = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter Time Quantum: ");
    scanf("%d", &q);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for P%d:\n", i+1);

        printf("Arrival Time: ");
        scanf("%d", &at[i]);

        printf("Burst Time: ");
        scanf("%d", &bt[i]);

        rt[i] = bt[i];
    }

    printf("\nGantt Chart:\n|");

    while(completed < n) {
        int done = 1;

        for(i = 0; i < n; i++) {
            if(rt[i] > 0 && at[i] <= time) {
                done = 0;

                if(rt[i] > q) {
                    printf(" P%d |", i+1);
                    time += q;
                    rt[i] -= q;
                }
                else {
                    printf(" p%d |", i+1);
                    time += rt[i];

                    ct[i] = time;

                    tat[i] = ct[i] - at[i];
                    wt[i] = tat[i] - bt[i];

                    avg_tat += tat[i];
                    avg_wt += wt[i];

                    rt[i] = 0;
                    completed++;
                }
            }
        }
        
        if(done == 1)
            time++;
    }

    printf("\n\n");

    printf("PID\tAT\tBT\tCT\tTAT\tWT\n");

    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i+1, at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    avg_tat /= n;
    avg_wt /= n;

    printf("\nAverage Turnaround Time = %.2f", avg_tat);
    printf("\nAverage Waiting Time = %.2f\n", avg_wt);

    return 0;
}