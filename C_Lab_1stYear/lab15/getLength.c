#include <stdio.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    int len=0;
    while(str[len]){
        len++;
        
    }
    printf("Length of string is %d\n",len);
}