#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int data;
    struct node* next;

}node;



void push(node** list,int val){
    node* ptr =(node*)(malloc(sizeof(node)));
    ptr->data=val;
    ptr->next=NULL;
    if(*list==NULL){
        *list=ptr;
        // list->data=val;
        // list->next=NULL;
    }else{
       ptr->next=*list; 
       *list=ptr;

    }
}


int pop(node** list){
    

        if(*list==NULL){
            printf("Empty stack\n");
            return -9999;
        }
        int x=(*list)->data;
        node* temp= (*list)->next;
        //temp=temp->next;
        free(*list);
        *list=temp;
        return x;
            
}


void traverse(node* list){
    node* temp=list;
    printf("[ ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\b]\n");

}

void enque(node** list,int val){
    node *helper=NULL;
    if(*list==NULL){
        push(list,val);
    }else{
        while(*list!=NULL){
            int x=pop(list);
            push(&helper,x);
        }
        push(list,val);
        while(helper!=NULL){
            int x=pop(&helper);
            push(list,x);
        }
        
    }
}

int main(){
    node* stack1=NULL;

    while(1){


        int x ;
        printf("Enter choice \n1-> enque\n2-> deque \n3->traverse\n0->exit\n");
        scanf("%d",&x);
        switch(x){

            case 1:
                int val1;
                printf("Enter element to be inserted \n");
                scanf("%d",&val1);
                enque(&stack1,val1);

                break;

            case 2:
                int val2=pop(&stack1);
                if(val2!=-9999){
                    printf("The value =%d \n",val2);
                }
                break;

            case 3:
                traverse(stack1);
                break;

            default:
                exit(0);
            }
        }



}
