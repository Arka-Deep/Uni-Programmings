#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int data;
    struct node* next;

}node;

typedef struct que{
    node* front;
    node* rear;
}que;

void enque(que* q,int val){
    node* ptr =(node*)(malloc(sizeof(node)));
    ptr->data=val;
    ptr->next=NULL;
    if(q->rear==NULL){
        q->front=q->rear=ptr;
    }else{
        q->rear->next=ptr;
        q->rear=ptr;
    }
 
}

int deque(que* q){
    if(q->front==NULL){
        printf("Empty Queue\n");
        return -9999;
    }else if(q->front==q->rear) {
        int x=q->front->data;
        free(q->front);
        q->front=q->rear=NULL;
        return x;
    }else{
        int x=q->front->data;
        node* temp=q->front;
        q->front=q->front->next;
        free(temp);
        return x;


    }
}
int size(que* q){
    int s=0;
    
    node* temp=q->front;
    while(temp!=NULL){
        s++;
        temp=temp->next;
    }
    return s;

}
void traverse(que* q){
    node* temp=q->front;
    printf("[ ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\b]\n");

}
int main(){
    que q1={NULL,NULL};

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

