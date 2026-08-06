#include <stdio.h>
typedef struct process {
    int pid;
    int at;     
    int bt;    
    int rt;     
    int ct;     
    int tat;   
    int wt;     
} process;
int main() {
    int n, completed = 0, current_time = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    process p[n];
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter AT and BT for Process %d: ", p[i].pid);
        scanf("%d %d", &p[i].at, &p[i].bt);
        p[i].rt = p[i].bt; 
    }
    while (completed != n) {
        int shortest = -1; 
        for (int i = 0; i < n; i++) {
            if (p[i].at <= current_time && p[i].rt > 0) {
                if (shortest == -1 || p[i].rt < p[shortest].rt) {
                    shortest = i;
                }
            }
        }
        if (shortest == -1) {
            current_time++;
            continue;
        }
        p[shortest].rt--;
        if (p[shortest].rt == 0) {
            completed++;
            p[shortest].ct = current_time + 1;
            p[shortest].tat = p[shortest].ct - p[shortest].at;
            p[shortest].wt = p[shortest].tat - p[shortest].bt;
        }        
        current_time++;
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    printf("--------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", 
                p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }
    return 0;
}