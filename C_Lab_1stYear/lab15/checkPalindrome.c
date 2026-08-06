#include <stdio.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    int len=0;
    while(str[len]){
        len++;
        
    }
    
    int flag=1;

   for(int i=0,j=len-1;i<j;i++,j--){
    if(str[i]!=str[j]){
        flag=0;
        break;
    }
   }

   if(flag){
    printf("Palindrome\n");
   }else{
    printf("Not a plaindrome\n");
   }
}