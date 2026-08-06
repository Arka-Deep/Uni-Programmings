#include <stdio.h>
typedef struct result{
    int num[3];
}res;

typedef struct student{
    int roll;
    char name[30];
    char sec;
    res result;

}stud;


int main(){
    int len=1;
    stud arr[len];
    for(int i=0;i<len;i++){
        printf("Enter details for Student No: %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &arr[i].roll);
        while (getchar() != '\n'); 
        printf("Name: ");
        fgets(arr[i].name, 30, stdin);
        printf("Section: ");
        scanf(" %c", &arr[i].sec);
        printf("Enter marks for 3 subjects:\n");

        for(int j=0;j<3;j++){
            scanf("%d",&arr[i].result.num[j]);
        }

    }
    for(int i=0;i<len;i++){
        printf("\n---------------------------------------------------\n");
        printf("Name: %sRoll: %d Sec: %c\n ",arr[i].name,arr[i].roll,arr[i].sec);
        
        for(int j=0;j<3;j++){
            printf("Sub%d:%d",j+1,arr[i].result.num[j]);
        }
    }
}