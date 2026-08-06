#include <stdio.h>

typedef struct process
{   int og_at;
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    int flag;
} process;

void main()
{
    int n;
    // n=4;

    printf("Enter Number of processes: \n");
    scanf(" %d", &n);

    process arr[n];
    float totTAT = 0, totWT = 0;

    for (int i = 0; i < n; i++)
    {
        printf("AT and BT for P%d : ", i);
        arr[i].pid = i;
        scanf("%d %d", &arr[i].at, &arr[i].bt);
        arr[i].og_at=arr[i].at;
        arr[i].flag = 0;
    }

    // sorting by AT
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].at > arr[j + 1].at)
            {
                process temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int curTime = 0;
    int swap_flag=0;
    for (int i = 0; i < n; i++)
    {   if(curTime<arr[i].at){
            curTime=arr[i].at;
        }

        if(arr[i].flag==0){
            curTime+=arr[i].bt*0.5;
            arr[i].bt/=2;
            arr[i].at=curTime+4;
            arr[i].flag=1;

            for(int j=i;j<n-1;j++){
                int in_loop_swap=0;
                if(arr[j].at>arr[j+1].at){
                    process temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swap_flag=1;
                    in_loop_swap=1;
                }
                if(in_loop_swap==0){
                    break;
                }
            }

            if(swap_flag==1){
                swap_flag=0;
                i--;
            }

        }else{
            curTime+=arr[i].bt;
            arr[i].ct=curTime;
            arr[i].tat=arr[i].ct-arr[i].og_at;
            arr[i].wt=arr[i].tat-(2*arr[i].bt)-4;

        }
    }

    printf("\n ---------------------First Come First Serve Scheduling with 4 ms i/o wait after 50% bt----------------------------");
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",arr[i].pid, arr[i].og_at, arr[i].bt, arr[i].ct, arr[i].tat, arr[i].wt);
    }
}