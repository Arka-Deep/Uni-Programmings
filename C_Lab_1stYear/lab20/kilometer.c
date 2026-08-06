#include <stdio.h>

struct dis{
    int kilo;
    int met;

};
struct dis add(struct dis s1,struct dis s2){
    struct dis sum;
    sum.kilo=s1.kilo+s2.kilo;
    sum.met=s1.met+s2.met;

    
    if(sum.met>=1000){
        sum.met-=1000;
        sum.kilo++;

    }
    return sum;

}

int main(){
    struct dis t1,t2,sum;

    printf("For time 1 , Enter distance in kilometer and meter \n");
    scanf("%d %d",&t1.kilo,&t1.met);
    printf("For time 2 , Enter hour minute and second\n");
    scanf("%d %d",&t2.kilo,&t2.met);

    sum=add(t1,t2);

    printf("Sum= %dKm %dm",sum.kilo,sum.met);

}