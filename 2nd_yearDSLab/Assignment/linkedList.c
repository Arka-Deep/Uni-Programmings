#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int data;
    struct node* next;

}node;

void create(node** list,int val){
    //creation of node
    node* ptr =(node*)(malloc(sizeof(node)));
    ptr->data=val;
    ptr->next=NULL;

    if(*list==NULL){
        *list=ptr;
        // list->data=val;
        // list->next=NULL;
    }else{
        node* temp=*list;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;


    }
}


int count(node** list){
    int cnt=0;
    node* temp=*list;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void delete(node** list,int idx){
    int len=count(list);
    if(idx>=len||idx<0){
        printf("Deletion not possible\n");
        return;
    }

    if(idx==0){
        node* temp= (*list)->next;
        //temp=temp->next;
        free(*list);
        *list=temp;

    }else{
       int cnt=1;
       node* prev=*list;
       while(cnt!=idx){
            prev=prev->next;
            cnt++;
       }
        if(prev->next->next==NULL){
            free(prev->next);
            prev->next=NULL;
        
        }else{
            node* del=prev->next;
            prev->next=prev->next->next;
            free(del);

       }


    }

    
}
void printll(node* list){
    node* temp=list;
    printf("[ ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\b]\n");

}


void deleteEven(node** list){
    int cnt=count(list);
    if(cnt%2==0){
        cnt/=2;
    }else{
        cnt=(cnt/2)+1;
    }
    for(int i=0;i<cnt;i++){
        delete(list,i);
    }

}

void deleteOdd(node** list){
    int cnt=count(list);
    cnt/=2;
    for(int i=1;i<=cnt;i++){
        delete(list,i);
    }

}

void delEvenVal(node** list){
    node* temp=*list;
    node* prev=NULL;
    while(temp!=NULL){
        if(temp->data%2==0){
            //we need to delete this node
            if(temp==*list){
                //the head is even 
                *list=(*list)->next;
                free(temp);
                temp=*list;
                prev=NULL;
                continue;
                


            }else{
                //the even node is not the head
                prev->next=temp->next;
                node* del=temp;
                temp=temp->next;  
                free(del);
                continue;              
                
            }
        }
        prev=temp;
        temp=temp->next;
    }
    

}


void reverse(node** list){
    node *prev=NULL,*cur=*list,*next=NULL;
    while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    *list=prev;

}


int main(){

    node* list=NULL;

    while(1){

        printf("Enter choice  \n 1->insert at end)\n 2-> Print Linked List\n");
        printf("3->Delete at Even index \n 4-> Delete at odd index\n5->Delete all even numbers present\n6->reverse linked list\n0->EXIT\n");

         int x;
        scanf("%d",&x);
        switch(x){

            case 1:
                printf("Enter value to be added\n");
                int val;
                scanf("%d",&val);
                create(&list,val);

                break;

            case 2:
                printll(list);
                break;

            case 3:
                deleteEven(&list);
                break;

            case 4:
                deleteOdd(&list);
                break;
            case 5:
                delEvenVal(&list);
                
                break;
            case 6:
                reverse(&list);
                break;
            default:
                exit(0);


        }



    }




}