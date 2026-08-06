#include <stdio.h>

int main() {
    int n, i, time = 0, smallest;
    int at[20], bt[20], rt[20];
    int ct[20], tat[20], wt[20];
    int completed = 0;
    float avg_tat = 0, avg_wt = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for P%d:\n", i+1);

        printf("Arrival Time: ");
        scanf("%d", &at[i]);

        printf("Burst Time: ");
        scanf("%d", &bt[i]);

        rt[i] = bt[i];  // remaining time
    }

    printf("\nGantt Chart:\n|");

    while(completed != n) {
        smallest = -1;

        for(i = 0; i < n; i++) {
            if(at[i] <= time && rt[i] > 0) {
                if(smallest == -1 || rt[i] < rt[smallest]) {
                    smallest = i;
                }
            }
        }

        if(smallest == -1) {
            time++;
            continue;
        }

        printf(" P%d |", smallest+1);

        rt[smallest]--;
        time++;

        if(rt[smallest] == 0) {
            completed++;
            ct[smallest] = time;
            tat[smallest] = ct[smallest] - at[smallest];
            wt[smallest] = tat[smallest] - bt[smallest];

            avg_tat += tat[smallest];
            avg_wt += wt[smallest];
        }
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