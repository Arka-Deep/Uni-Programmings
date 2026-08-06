#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    scanf(" %[^\n]",str);
    int len=strlen(str);
    int vow=0,cons=0;
    for(int i =0;i<len;i++){
        char a =str[i];
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
            if (a =='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
                vow++;
            }else{
                cons++;
            }
        }
    }

    printf("The number of vowels are %d and consonants are %d\n",vow,cons);



}