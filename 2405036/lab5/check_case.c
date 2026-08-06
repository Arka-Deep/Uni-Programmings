#include <stdio.h>
int main(){
    char ch ;
    printf("Enter a character\n");
    scanf(" %c",&ch);
    if(ch>=65 && ch<=90){
        printf("Upper Case");
    }
    else if(ch>=97 && ch<=122){
        printf("Lower Case");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}