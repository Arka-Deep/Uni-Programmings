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

void insertHead(node** list,int val){
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

void printll(node* list){
    node* temp=list;
    printf("[ ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\b]\n");

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

void lar(node** list){
    node* temp=*list;
    if(temp==NULL){
        printf("Empty List\n");
        return;
    }else{
        int lar=temp->data;
        while(temp!=NULL){
            if(temp->data>lar){
                lar=temp->data;

            }
            temp=temp->next;
        }
        printf("Largest = %d\n",lar);
    }

}

void smal(node** list){
    node* temp=*list;
    if(temp==NULL){
        printf("Empty List\n");
        return;
    }else{
        int sm=temp->data;
        while(temp!=NULL){
            if(temp->data<sm){
                sm=temp->data;
            }
            temp=temp->next;
            
        }
        printf("Smalest = %d\n",sm);
    }
    
}


void insert(node** list,int idx,int val){
    //printf("in func \n");
    
    //printf("%d\n",count(list));
    int len=count(list);
    
    if(idx>len){
        printf("Index out of bounds\n");
        return;
    }
    if(idx==0){
        insertHead(list,val);

    }else{
        node* ptr =(node*)(malloc(sizeof(node)));
        ptr->data=val;
        ptr->next=NULL;

        node* temp=*list;
        int cnt=0;
        while(cnt<idx-1){
            cnt++;
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }


}

void insertAfterIndex(node** list,int key,int val){
    node* temp= *list;
    int FoundAt=0;
    while(temp->data!=key){
        FoundAt++;
        temp=temp->next;
        if(temp==NULL){
            printf("Element not found\n");
            return;
        }

    }
    insert(list,FoundAt+1,val);
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

void evOd(node** list){
    int ev=0;
    int od=0;
    node* tmp=*list;
    while(tmp!=NULL){
        if(tmp->data%2==0){
            ev++;
        }else{
            od++;
        }
        tmp=tmp->next;
    }

    printf("Even = %d ,Odd = %d",ev,od);

}


int main(){
    node* list=NULL;


    while(1){
        printf("Enter choice  \n 1-> (create/insert at end)\n 2-> Print Linked List\n 3->(create/insert at head)\n 4-> Print size of Linked List\n 5->Find Largest\n");
        printf("6->Find Smallest\n7->Insert Value at specific index\n8->Insert after element X\n9->Delete from beginning\n10->Delete End\n11->Delete at index\n");
        printf("12->Delete at Even index\n13->Count even and odd values \n0->EXIT\n");


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
                printf("Enter value to be added at head\n");
                int val2;
                scanf("%d",&val2);
                insertHead(&list,val2);
                break;

            case 4:
                printf("The size of linked list %d\n",count(&list));
                break;

            case 5:
                lar(&list);
                break;


            case 6:
                smal(&list);
                break;
            case 7:
                printf("Enter value and index to insert\n");
                int idx,val3;
                scanf("%d %d",&val3,&idx);
                insert(&list,idx,val3);
                break;
            case 8:
                printf("Enter value to be inserted and value after which to be inserted\n");
                int key,val4;
                scanf("%d %d",&val4,&key);
                insertAfterIndex(&list,key,val4);
                break;
            case 9:
                delete(&list,0);
                break;
            case 10:
                delete(&list,count(&list)-1);
                

                break;
            case 11:
                printf("Insert index to be deleated from\n");
                int index;
                scanf("%d",&index);
                delete(&list,index);
                
                break;
            case 12:
                deleteEven(&list);

                break;
            case 13:
                evOd(&list);
                break;

            default:
                exit(0);

        }
    }

}