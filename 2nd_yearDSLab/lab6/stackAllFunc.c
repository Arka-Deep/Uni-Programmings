#include <stdio.h>
#include <stdlib.h>
#define MAX 64


typedef struct st{
    int st[MAX];
    int top;
}st;
void push(st *stak,int x){

    if(stak->top==MAX-1){
        printf("Stack Full\n");
        return;
    }
    stak->st[++stak->top]=x;;


}
int pop(st *stak){
    if(stak->top==-1){
        printf("Empty Stack\n");
        return -9999;
    }
    int x=stak->st[stak->top--];
    return x;


}

int length(st *stak){
    return stak->top==-1?0:stak->top+1;
}

int peek(st *stak){
    if(stak->top==-1){
        printf("Empty stack\n");
        return -9999;
    }
    return stak->st[stak->top];
}

void disp(st *stak){
    if(stak->top==-1){
        printf("Empty Stack\n");
    }else{
        for(int i=stak->top;i>=0;i--){
            printf("%d ",stak->st[i]);
        }
        printf("\n");
    }
}

int main(){
    st stack1;
    stack1.top=-1;

    while(1){

        int x ;
        printf("Enter choice \n1-> Push \n2-> Pop \n3->Peek \n4->length \n5->traverse\n0->exit\n");
        scanf("%d",&x);
        switch(x){

            case 1:
                int val1;
                printf("Enter element to be inserted \n");
                scanf("%d",&val1);
                push(&stack1,val1);

                break;

            case 2:
                int val2=pop(&stack1);
                if(val2!=-9999){
                    printf("The value =%d \n",val2);
                }
                break;

            case 3:
                int val3=peek(&stack1);
                if(val3!=-9999){
                    printf("The value =%d \n",val3);
                }
                break;

            case 4:
                printf("The length is %d \n",length(&stack1));
                break;
            case 5:
                disp(&stack1);
                break;
            default:
                exit(0);

        }




    }


}


