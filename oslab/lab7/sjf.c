#include <stdio.h>



typedef struct process{
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
}process;

int main(){
    int n;
    //n=4;
    
    printf("Enter Number of processes: \n");
    scanf(" %d",&n);


    process arr[n];
    int flag[n];
    float totTAT=0,totWT=0;

    for(int i=0;i<n;i++){
        flag[i]=0;
        printf("AT and BT for P%d : ",i);
        arr[i].pid=i;
        scanf("%d %d",&arr[i].at,&arr[i].bt);
    }

        //sorting by AT
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].at > arr[j + 1].at) {
                process temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    




    printf("\n ---------------------Shortest Job First Scheduling----------------------------");
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",arr[i].pid, arr[i].at, arr[i].bt, arr[i].ct, arr[i].tat, arr[i].wt);
    }

    printf("\n \nAverage Waiting Time: %.2f \nAverage Completion Time: %.2f \n",totTAT/n,totWT/n);


}