#include <stdio.h>
#include <stdbool.h>

typedef struct process
{

    int pid;
    int at;
    int bt;
    int rt;
    int ct;
    int tat;
    int wt;

} process;



void rr(process arr[],int n,int tq){
    int curTime=0;
    int completed=0;
    bool inQueue[n];
    int que[100],front=0,rear=0;
    for(int i=0;i<n;i++){
        inQueue[i]=false;
    }
    while(completed<n){
        for(int i=0;i<n;i++){
            if(arr[i].at<=curTime && inQueue[i])
        }
    }


}



int main()
{

    int n;
    printf("Enter Number of processes: \n");
    scanf(" %d", &n);

    printf("Enter time quanta");
    int tq;
    scanf(" %d", &tq);

    process arr[n];
    float totTAT = 0, totWT = 0;

    for (int i = 0; i < n; i++)
    {
        printf("AT and BT for P%d : ", i);
        arr[i].pid = i;
        scanf("%d %d", &arr[i].at, &arr[i].bt);
        arr[i].rt=arr[i].bt;

    }

    // sorting by at
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



   
}
