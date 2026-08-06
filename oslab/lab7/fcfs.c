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
    float totTAT=0,totWT=0;

    for(int i=0;i<n;i++){
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

    int curTime=0;
    for(int i=0;i<n;i++){
        if(curTime<arr[i].at){
            curTime=arr[i].at;
        }
        arr[i].ct=curTime+arr[i].bt;
        arr[i].tat=arr[i].ct-arr[i].at;
        arr[i].wt=arr[i].tat-arr[i].bt;
        curTime=arr[i].ct;

        totTAT+=arr[i].tat;
        totWT+=arr[i].wt;

    }
    printf("\n ---------------------First Come First Serve Scheduling----------------------------");
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",arr[i].pid, arr[i].at, arr[i].bt, arr[i].ct, arr[i].tat, arr[i].wt);
    }

    printf("\n \nAverage Waiting Time: %.2f \nAverage Completion Time: %.2f \n",totTAT/n,totWT/n);


}