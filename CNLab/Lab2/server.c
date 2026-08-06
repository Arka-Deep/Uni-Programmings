#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>
//#include <netinet/ip.h>
int main(){
    int fd=socket(AF_INET,SOCK_DGRAM,0); //returns file descriptor and -1 for errors, usually returns 3
    printf("File Descriptor value: %d\n",fd);
    if(fd==-1){
        printf("Socket creation failed\n");
    }else{
        printf("Socket creation Sucessfull\n");
    }

    struct sockaddr_in serv;
    serv.sin_family=AF_INET;
    serv.sin_port=6000;
    serv.sin_addr.s_addr=inet_addr("127.0.0.1");
    int b=bind(fd,(struct sockaddr *) &serv,sizeof(serv));//always returns 0 for success -1 for failure
    printf("BInd returned: %d\n",b);
    if(b==0){
        printf("Bind succesful\n");
    }else{
        printf("Bind Unsuccesfull\n");
    }
    char* msg[30];
    int z=sizeof(serv);
    recvfrom(fd,msg,30,0,(struct sockaddr *)&serv,&z);
    printf("%s",msg);
}
