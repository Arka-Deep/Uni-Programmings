#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int main(){
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    printf("File Descriptor value: %d\n",fd);
    if(fd==-1){
        printf("Socket creation failed\n");
        return 0;
        
    }else{
        printf("Socket creation Sucessfull\n");
    }

    //server details
    struct sockaddr_in serv;
    serv.sin_family=AF_INET;
    serv.sin_port=6001;
    serv.sin_addr.s_addr=inet_addr("127.0.0.1");

    int c_fd = connect(fd, (struct sockaddr *)&serv, sizeof(serv));
    if(c_fd==-1){
        printf("connect failed\n");
        return 0;
    }else{
        printf("connect Sucessfull\n");
    }

    printf("\nEnter the string to send: ");
    char msg[30];
    fgets(msg, 30, stdin);
    send(fd, msg, sizeof(msg), 0);
    recv(fd, msg, sizeof(msg), 0);
    printf("Server: %s\n", msg);
    
    
    return 0;
}
