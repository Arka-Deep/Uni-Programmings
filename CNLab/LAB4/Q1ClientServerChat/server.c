#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int main(){
    int fd=socket(AF_INET,SOCK_DGRAM,0); 
    printf("File Descriptor value: %d\n",fd);
    if(fd==-1){
        printf("Socket creation failed\n");
    }else{
        printf("Socket creation Sucessfull\n");
    }
    //server details
    struct sockaddr_in serv;
    serv.sin_family=AF_INET;
    serv.sin_port=6001;
    serv.sin_addr.s_addr=inet_addr("127.0.0.1");
    int b=bind(fd,(struct sockaddr *) &serv,sizeof(serv));
    printf("BInd returned: %d\n",b);
    if(b==0){
        printf("Bind succesful\n");
    }else{
        printf("Bind Unsuccesfull\n");
    }
    //client details
    struct sockaddr_in cli;
    // cli.sin_family=AF_INET;
    // cli.sin_port=6000;
    // cli.sin_addr.s_addr=inet_addr("127.0.0.1");
   
    while(1){
        

        char msg[30];
        int z=sizeof(cli);
        recvfrom(fd,msg,30,0,(struct sockaddr *)&cli,&z);
        
        printf("%s",msg);
        
        printf("\nEnter the string to send: \n");

        fgets(msg,30,stdin);
        
        sendto(fd,msg,sizeof(msg),0,(struct sockaddr *)&cli,sizeof(cli));
    }
}
