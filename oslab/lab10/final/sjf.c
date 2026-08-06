#include <stdio.h>

typedef struct process {
    int pid;    // Process ID
    int at;     // Arrival Time
    int bt;     // Burst Time
    int ct;     // Completion Time
    int tat;    // Turnaround Time
    int wt;     // Waiting Time
    int flag;   // To check if process is completed
} process;

int main() {
    int n, completed = 0, current_time = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    process p[n];

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter Arrival Time and Burst Time for Process %d: ", i + 1);
        scanf("%d %d", &p[i].at, &p[i].bt);
        p[i].flag = 0; // Initialize as not completed
    }

    printf("\n--- Scheduling ---\n");

    while (completed != n) {
        int best_index = -1;
        int min_bt = 1e9; // Start with a very large number

        // Find the process with the shortest burst time that has arrived
        for (int i = 0; i < n; i++) {
            if (p[i].at <= current_time && p[i].flag == 0) {
                if (p[i].bt < min_bt) {
                    min_bt = p[i].bt;
                    best_index = i;
                }
            }
        }

        if (best_index == -1) {
            // No process has arrived yet, just move time forward
            current_time++;
        } else {
            // Execute the shortest job
            current_time += p[best_index].bt;
            p[best_index].ct = current_time;
            p[best_index].tat = p[best_index].ct - p[best_index].at;
            p[best_index].wt = p[best_index].tat - p[best_index].bt;
            p[best_index].flag = 1;
            completed++;
        }
    }

    // Display the results
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", 
               p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }

    return 0;
}