#include <stdio.h>
typedef struct student{
    int roll;
    char name[30];
    char sec;

}stud;

int main(){
    int len=1;
    stud arr[len];
    for(int i=0;i<len;i++){
        // printf("Enter roll name and section for Studen NO : %d \n",i+1);
        // scanf(" %d",&arr[i].roll);
        // fgets(arr[i].name,30,stdin);
        // while(getchar()!='\n');
        // arr[i].sec=getchar();
        // //scanf(" %[\n]",&arr[i].name);
        // //while(getchar()!='\n');
        // //scanf(" %c",&arr[i].sec);

        printf("Enter details for Student No: %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &arr[i].roll);
        while (getchar() != '\n'); 
        printf("Name: ");
        fgets(arr[i].name, 30, stdin);
        printf("Section: ");
        scanf(" %c", &arr[i].sec);

    }
    for(int i=0;i<len;i++){
        printf("\n---------------------------------------------------\n");
        printf("Name: %sRoll: %d Sec: %c\n ",arr[i].name,arr[i].roll,arr[i].sec);
    }
}