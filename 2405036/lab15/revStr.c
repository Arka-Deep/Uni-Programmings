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
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
   }

   
    printf("Reversed String --> %s\n",str);
   
}