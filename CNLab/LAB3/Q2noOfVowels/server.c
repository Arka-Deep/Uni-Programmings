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
    //client
    struct sockaddr_in cli;

   
    
    printf("waiting for data  from client:\n");

    char msg[30];
    int z=sizeof(cli);
    recvfrom(fd,msg,30,0,(struct sockaddr *)&cli,&z);
    //printf("Data recved: ");
    printf("%s",msg);

    int v=0;
    char ch;
    for(int i=0;msg[i]!='\0';i++){
        ch=msg[i];
        if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o'|| ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U'){
                v++;
            }
    }
   // printf("\n Sending acknowledgement: \n");

    
    sendto(fd,&v,sizeof(v),0,(struct sockaddr *)&cli,sizeof(cli));

}
