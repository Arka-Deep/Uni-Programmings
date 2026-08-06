#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    char initials[10];

    int j=1;
    initials[0]=str[0];
    for(int i=1;i<strlen(str);i++){

        if(str[i-1]==' '){
            initials[j]=str[i];
            j++;
        }
    }
    initials[j]='\0';
    

    for(int i=0;i<strlen(initials);i++){
        if(i==strlen(initials)-1){
            printf("%c",initials[i]);
        }else{
            printf("%c.",initials[i]);
        }
    }
    printf("\n");



}