#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;

}node;

node* create(int val){
    node* ptr=(node*)malloc(sizeof(node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;
    
    return ptr;

}

node* insert(node* temp,int val){
    if(temp==NULL){
        return create(val);
    }

    if(val<=temp->data){
        temp->left=insert(temp->left,val);

    }
    else if(val>temp->data){
        temp->right=insert(temp->right,val);
    }
    return temp;
}

node* search(node* temp,int key){
    if(temp==NULL||temp->data==key){
        return temp;
    }
    if(key>temp->data){
        return search(temp->right,key);
    }else{
        return search(temp->left,key);
    }
    

}

node* min(node* temp){
    if(temp==NULL){
        return NULL;
    }
    if(temp->left==NULL){
        return temp;
    }

    return min(temp->left);
}

node* max(node* temp){
    if(temp==NULL){
        return NULL;
    }

    if(temp->right==NULL){
        return temp;
    }
    return max(temp->right);
}

int height(node* temp){
    if(temp==NULL){
        return 0;
    }else{
        int lheight=height(temp->left);
        int rheight=height(temp->right);
        return(lheight>rheight?lheight:rheight)+1;
    }
}

int main(){
    node* root=NULL;
    while (1){

        printf("1->insert value\n2->Search\n3->Find Min\n4->Find Max\n5->Height\n0->Exit\n");
        int x;
        scanf("%d",&x);
        switch(x){
            case 1:
                printf("Insert Value to be inserted\n");
                int val;
                scanf("%d",&val);
                root=insert(root,val);
            break;

            case 2:
                printf("Insert Value to be searched\n");
                int val1;
                scanf("%d",&val1);
                node* temp=search(root,val1);
                if(temp==NULL){
                    printf("Value Not Found\n");
                }else{
                    printf("Value Found\n");
                }
            break;

            case 3:
                node* temp1=min(root);
                if(temp1==NULL){
                    printf("Empty Tree\n");
                    break;
                }
                printf("Min-> %d\n",temp1->data);
            break;

            case 4:
                node* temp2=max(root);
                if(temp2==NULL){
                    printf("Empty Tree\n");
                    break;
                }
                printf("Max-> %d\n",temp2->data);
            break;

            case 5:
                printf("The height of the tree is %d\n",height(root));
            break;

            default:
                exit(0);
        }
        
    }
    
}