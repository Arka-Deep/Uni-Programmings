#include <stdio.h>
struct empl{
    char name[20];
    char gender;
    float basic;
    float gross;
};

void sal(struct empl* ptr){
    float hra=ptr->basic*0.25;
    float da=ptr->basic*0.75;
    ptr->gross=ptr->basic+hra+da;
}
int main(){
    struct empl e1;
    printf("Enter Name ,gender , basic pay:\n");
    scanf("%[^\n]",&e1.name);
    scanf(" %c",&e1.gender);
    scanf("%f",&e1.basic);
    sal(&e1);
    printf("Name: %s\nGender: %c\nGross Pay: %.2f\n",e1.name,e1.gender,e1.gross);
}