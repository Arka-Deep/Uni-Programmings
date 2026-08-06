#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;

}node;

//temp stack
int top=-1;
node* stk[64];

void push(node* ptr){
    top++;
    stk[top]=ptr;
}
node* pop(){
    node* temp=stk[top];
    top--;
    return temp;
}









node* createTree(){
    int val;
    printf("Enter Data (-1->terminate current node)\n");
    scanf("%d",&val);
    if(val==-1){
        return NULL;
    }

    node* temp=(node*)malloc(sizeof(node));
    temp->data=val;
    temp->left=createTree();
    temp->right=createTree();
    return temp;

}


//recursive traversal
void inorder(node* ptr){
    //left-root-right
    if(ptr==NULL){
        return;
    }
    inorder(ptr->left);
    printf("%d ",ptr->data);
    inorder(ptr->right);
}

void preorder(node *ptr){
    //root-left-right
    if(ptr==NULL){
        return;
    }
    printf("%d ",ptr->data);
    preorder(ptr->left);
    preorder(ptr->right);
}
void postorder(node* ptr){
    //left-right-root
    if(ptr==NULL){
        return;
    }
    postorder(ptr->left);
    postorder(ptr->right);
    printf("%d ",ptr->data);

}


//non-recursive traversal
void inorderNonRec(node* ptr){
//left-root-right
    while(top!=-1||ptr!=NULL){
        if(ptr!=NULL){
            push(ptr);
            ptr=ptr->left;
        }else{
            ptr=pop();
            printf("%d ",ptr->data);
            ptr=ptr->right;
        }
    }


}

void preorderNonRec(node* ptr){
    //root-left-right
    node* temp;
    push(ptr);
    while(top!=-1){
        temp=pop();
        if(temp!=NULL){
            printf("%d ",temp->data);
            push(temp->right);
            push(temp->left);
        }
    }
}

void postorderNonRec(node* ptr){
    //left-right-root
     node* temp;
    
    while(1){
        while(ptr!=NULL){
            push(ptr);
            push(ptr);
            ptr=ptr->left;
        }
        if(top==-1)
            break;
        
        ptr=pop();
        if(top!=-1 && stk[top]==ptr){
            ptr=ptr->right;
        }else{
            printf("%d ",ptr->data);
            ptr=NULL;
        }

        
    }
}
 int main(){
    printf("Creating Tree:\n");
    node* Root=createTree();
    printf("Inoder \nRecusive: ");
    inorder(Root);
    printf("\nNon Recursive: ");
    inorderNonRec(Root);
    printf("\nPreoder \nRecusive: ");
    preorder(Root);
    printf("\nNon Recursive: ");
    preorderNonRec(Root);
    printf("\nPostoder \nRecusive: ");
    postorder(Root);
    printf("\nNon Recursive: ");
    postorderNonRec(Root);
    printf("\n");
    
 }

