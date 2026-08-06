#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    scanf(" %[^\n]",str);
    int len=strlen(str);
    

    char str2[20];
    printf("Enter another string\n");
    scanf(" %[^\n]",str2);
    int len2=strlen(str2);
    for(int i=0;i<len2;i++){
        str[i]=str2[i];
    }
    printf("String 1 after copying %s\n",str);




}