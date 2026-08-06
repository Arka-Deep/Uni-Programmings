#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int r;
    int c;
    int val;
    struct node* next;

}node;

void create(node** list,int r,int c,int val){
    //creation of node
    node* ptr =(node*)(malloc(sizeof(node)));
    ptr->c=c;
    ptr->r=r;
    ptr->val=val;
    ptr->next=NULL;

    if(*list==NULL){
        *list=ptr;
        
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

void disp(node** list){
    node* temp=*list;
    printf("The 3Tuple representation is: \n");
    while(temp!=NULL){
        printf("%d  %d  %d\n",temp->r,temp->c,temp->val);
        temp=temp->next;
    }
}
int main(){
    int row,col,val;
    printf("Enter the number of row col in matrix\n");
    scanf("%d %d",&row,&col);
    node* sparse=(node*)(malloc(sizeof(node)));
    sparse->c=col;
    sparse->r=row;
    sparse->next=NULL;

    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter element \n");
            scanf("%d",&val);
            if(val!=0){
                create(&sparse,i,j,val);
            }

        }
    }
    int cnt=count(&sparse)-1;
    sparse->val=cnt;
    disp(&sparse);

}
