//sort based on roll no;
#include <stdio.h>
struct stud{
    char name[30];
    int roll;
    int marks;
};

//void sortStructArray(struct stud)

int main(){
    int x;
    printf("Enter no of students to enter details for\n");
    scanf("%d",&x);
    struct stud arr[x];
    struct stud temp;
    for(int i=0;i<x;i++){
        printf("Enter name roll and marks of student\n");
        //fgets(arr[i].name,30,stdin);
        scanf(" %[^\n]",arr[i].name);
        scanf("%d %d",&arr[i].roll,&arr[i].marks);

    }
    //sort
    for(int i=0;i<x;i++){
        int flag=1;
        for(int j=0;j<x-1-i;j++){
            if(arr[j].marks<arr[j+1].marks){
                //swap
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
        if(flag){
            break;
        }
    }

    printf("The sorted array is\nName:\tRoll:\tMarks:\n");

    for(int i=0;i<x;i++){
        printf("%s\t%d\t%d\n",arr[i].name,arr[i].roll,arr[i].marks);
    }


}