/*
   1
  121
 12321
1234321
 */
#include <stdio.h>
int main(){
    int n;
    //scanf("%d",&n);
    n=5;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--)
        printf(" ");

    for(int j=1;j<=i;j++)
        printf("%d",j);

    for(int j=i-1;j>=1;j--)
        printf("%d",j);
     
        
        printf("\n");
    }
}