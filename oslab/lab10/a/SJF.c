#include <stdio.h>

#define MAX 10
#define GMAX 100

int main() {

    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    char pid[MAX];
    int at[MAX], bt[MAX];
    int remaining[MAX], first_cpu[MAX];
    int io_complete[MAX], ct[MAX];
    int state[MAX];        // 0=not arrived, 1=ready, 2=IO, 3=done
    int first_done[MAX];   // 0=first CPU not done

    // Gantt storage
    char gantt_pid[GMAX];
    int gantt_start[GMAX], gantt_end[GMAX];
    int gcount = 0;

    // Input
    for(int i = 0; i < n; i++) {

        printf("\nProcess ID: ");
        scanf(" %c", &pid[i]);

        printf("Arrival Time: ");
        scanf("%d", &at[i]);

        printf("Burst Time: ");
        scanf("%d", &bt[i]);

        remaining[i] = bt[i];
        first_cpu[i] = bt[i] / 2;
        state[i] = 0;
        first_done[i] = 0;
    }

    int time = 0;
    int completed = 0;

    while(completed < n) {

        // Add arrivals
        for(int i = 0; i < n; i++)
            if(at[i] <= time && state[i] == 0)
                state[i] = 1;

        // Add IO returns
        for(int i = 0; i < n; i++)
            if(state[i] == 2 && io_complete[i] <= time)
                state[i] = 1;

        // SJF Selection
        int idx = -1;
        int shortest = 100000;

        for(int i = 0; i < n; i++) {
            if(state[i] == 1) {

                int burst = (first_done[i] == 0) ? first_cpu[i] : remaining[i];

                if(burst < shortest) {
                    shortest = burst;
                    idx = i;
                }
            }
        }

        // CPU Idle
        if(idx == -1) {
            time++;
            continue;
        }

        int start = time;

        // Execute first half
        if(first_done[idx] == 0) {

            time += first_cpu[idx];
            remaining[idx] -= first_cpu[idx];
            first_done[idx] = 1;

            state[idx] = 2;
            io_complete[idx] = time + 4;
        }
        else {  // second half

            time += remaining[idx];
            remaining[idx] = 0;

            state[idx] = 3;
            ct[idx] = time;
            completed++;
        }

        // Store in Gantt
        gantt_pid[gcount] = pid[idx];
        gantt_start[gcount] = start;
        gantt_end[gcount] = time;
        gcount++;
    }

    // ================= TABLE =================
    float avg_tat = 0, avg_wt = 0;

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");

    for(int i = 0; i < n; i++) {

        int tat = ct[i] - at[i];
        int wt = tat - bt[i];

        avg_tat += tat;
        avg_wt += wt;

        printf("%c\t%d\t%d\t%d\t%d\t%d\n", pid[i], at[i], bt[i], ct[i], tat, wt);
    }

    avg_tat /= n;
    avg_wt /= n;

    printf("\nAverage Turnaround Time = %.2f", avg_tat);
    printf("\nAverage Waiting Time = %.2f\n", avg_wt);

    // ================= GANTT =================
    printf("\nGantt Chart:\n");

    // Top line
    for(int i = 0; i < gcount; i++)
        printf("-------");
    printf("-\n");

    // Process IDs
    for(int i = 0; i < gcount; i++)
        printf("|  %c  ", gantt_pid[i]);
    printf("|\n");

    // Bottom line
    for(int i = 0; i < gcount; i++)
        printf("-------");
    printf("-\n");

    // Timeline
    printf("%d", gantt_start[0]);
    for(int i = 0; i < gcount; i++)
        printf("      %d", gantt_end[i]);

    printf("\n");

    return 0;
}