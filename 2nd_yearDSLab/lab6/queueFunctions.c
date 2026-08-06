#include <stdio.h>
#include <stdlib.h>
#define MAX 64

typedef struct que{
    int q[MAX];
    int f;
    int r;

}que;

void enque(que *q,int x){
    if(q->r==MAX-1){
        printf("Queue is full\n");
    }else if(q->r==-1){
        q->f++;
        q->q[++q->r]=x;
    }else{
        q->q[++q->r]=x;
    }


}
int deque(que *q){
    if(q->f==-1){
        printf("EMpty Queue\n");
        return -9999;
    }else if(q->r==q->f){
        int x =q->q[q->f];
        q->f=-1;
        q->r=-1;
        return x;
    }else{
        int y=q->q[q->f];
        q->f++;
        return y;
    }
}

void traverse(que *q){
    if(q->r==-1){
        printf("EMpty queue\n");

    }else{
        for(int i=q->f;i<=q->r;i++){
            printf("%d ",q->q[i]);
        }
        printf("\n");
    }
}

int main(){
    que q1;
    q1.r=-1;
    q1.f=-1;
    while(1){


        int x ;
        printf("Enter choice \n1-> enque\n2-> deque \n3->traverse\n0->exit\n");
        scanf("%d",&x);
        switch(x){

            case 1:
                int val1;
                printf("Enter element to be inserted \n");
                scanf("%d",&val1);
                enque(&q1,val1);

                break;

            case 2:
                int val2=deque(&q1);
                if(val2!=-9999){
                    printf("The value =%d \n",val2);
                }
                break;

            case 3:
                traverse(&q1);
                break;

            default:
                exit(0);
            }
    }
}