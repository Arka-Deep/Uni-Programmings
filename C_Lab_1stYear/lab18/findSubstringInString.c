#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    char substr[20];
    int flag=0;
    printf("Enter a string \n");
    fgets(str,20,stdin);
    //scanf("%[\n]",str);
    
    printf("Enter a substring\n");
    fgets(substr,20,stdin);
    //scanf(" %[\n]",substr);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    for (int i = 0; substr[i] != '\0'; i++) {
        if (substr[i] == '\n') {
            substr[i] = '\0';
            break;
        }
    }
    int i=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]==substr[0]){
            for(int j=0;j<strlen(substr);j++){
                if(str[i+j]==substr[j]){
                    //printf(" %c - %c ",str[i+j],substr[j]);
                    flag=1;
                }else{
                    flag=0;
                    break;
                }
            }
            break;
        }
    }

    if(flag){
        printf("The substring was present at  index %d\n",i);
    }else{
        printf("The substring was not present \n");
    }

}