/*
1
01
101
0101
10101
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++)
            printf("%d",(j+i+1)%2);

        
        printf("\n");
    }
}