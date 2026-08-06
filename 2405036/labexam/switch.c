#include <stdio.h>
int main(){
    int x ;
    printf("Calculate area of the following \n");
    printf("1 -> Circle\n");
    printf("2 -> Triangle\n");
    printf("3 -> Rectangle\n");
    printf("Enter Choice\n");
    scanf("%d",&x);
    switch(x){
        case 1:
            float r,cir_area;
            printf("Enter Radius\n");
            scanf("%f",&r);
            cir_area=(float)3.14*r*r;  
            printf("The Area is %f\n",cir_area);          
            break;
        case 2:
            float b,hi,tri_area;
            printf("Enter base and hieght of triangle\n");
            scanf("%f %f",&b,&hi);
            tri_area=(float)1/2*b*hi;
            printf("The Area is %f\n",tri_area);
            break;
        case 3:
            float len,br,rec_area;
            printf("Enter length and breadth of rectangle\n");
            scanf("%f %f",&len,&br);
            rec_area=len*br;
            printf("The Area is %f\n",rec_area);            
            break;
        default:
            printf("A valid option was not selected\n");
    }
    return 0;



        
    

}