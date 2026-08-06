#include <stdio.h>

struct time{
    int hr;
    int min;
    int sec;
};

struct time add(struct time s1,struct time s2){
    struct time sum={0};
    sum.hr=s1.hr+s2.hr;
    sum.min=s1.min+s2.min;
    sum.sec=s1.min+s2.min;
    if(sum.sec>=60){
        sum.sec-=60;
        sum.min++;
    }
    if(sum.min>=60){
        sum.min-=60;
        sum.hr++;
    }
    return sum;

}

int main(){
    struct time t1,t2,sum;

    printf("For time 1 , Enter hour minute and second\n");
    scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);
    printf("For time 2 , Enter hour minute and second\n");
    scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);

    sum=add(t1,t2);

    printf("%dHr %dmin %dsec\n",sum.hr,sum.min,sum.sec);
    



}