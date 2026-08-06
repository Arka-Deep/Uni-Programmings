#include <stdio.h>
int main(){
    char ch ;
    printf("Enter a character\n");
    scanf(" %c",&ch);
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)){
       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("It is a Vowel");
       }
       else{
        printf("It is a Consonant");
       }
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}