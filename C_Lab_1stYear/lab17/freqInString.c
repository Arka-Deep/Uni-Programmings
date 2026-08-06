#include <stdio.h>
#include <string.h>

int main(){
    printf("Enter a String\n");
    char str[64];
    //scanf("%[^/n] ",str);
    //fgets(str,64,stdin);
    scanf("%[^\n]%*c", str);
    
    printf("Enter a character\n");
    char ch;
    scanf("%c",&ch);

    int count=0,len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==ch){
            count++;
        }
    }

    printf("the frequency of %c in %s  is %d\n",ch,str,count);
}