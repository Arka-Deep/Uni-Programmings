#include <stdio.h>

int main(){
    int x=1;
    char* pointer=(char*)&x;
    if(*pointer==1){
        printf("Little Endian\n");
    }else{
        printf("BigEndian\n");
    }
}