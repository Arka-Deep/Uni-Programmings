#include <stdio.h>
#include <string.h>

int main(){
    char str[40];
    printf("Enter a string\n");
    scanf(" %[^\n]",str);
    int len=0;
    while(str[len]){
        len++;
        
    }

    char str2[20];
    printf("Enter another string\n");
    scanf(" %[^\n]",str2);
    int len2=strlen(str2);

    for(int i=0;i<len2-1;i++){
        str[len+i]=str2[i];
    }
    str[len+len2]='\0';
    printf("%s\n",str);


}