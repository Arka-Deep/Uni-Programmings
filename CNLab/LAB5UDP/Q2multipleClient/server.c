#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int main(){
    int fd=socket(AF_INET,SOCK_STREAM,0); 
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
    int b=bind(fd,(struct sockaddr *) &serv,sizeof(serv));
    printf("BInd returned: %d\n",b);
    if(b==0){
        printf("Bind succesful\n");
    }else{
        printf("Bind Unsuccesfull\n");
        return 0;
    }
    struct sockaddr_in cli;
    listen(fd, 2);
    int sz=sizeof(cli);
    int client_fd = accept(fd, (struct sockaddr*)&cli, &sz);
    if (client_fd == -1) {
        printf("Accept failed\n");
        return 0;
    }else{
        printf("Client1 connected\n");
    }
    //2nd cli
    struct sockaddr_in cli2;
    int sz2=sizeof(cli);
    int client_fd2 = accept(fd, (struct sockaddr*)&cli2, &sz2);
    if (client_fd2 == -1) {
        printf("Accept failed\n");
        return 0;
    }else{
        printf("Client2 connected\n");
    }


    char msg[30];
    recv(client_fd, msg, sizeof(msg), 0);
    printf("Client1: %s", msg);
    printf("Enter the string to send to client 1:");
    fgets(msg, sizeof(msg), stdin);
    send(client_fd, msg, sizeof(msg), 0);
   

    recv(client_fd2, msg, sizeof(msg), 0);
    printf("Client2: %s", msg);
    printf("Enter the string to send to client 2:");
    fgets(msg, sizeof(msg), stdin);

    send(client_fd2, msg, sizeof(msg), 0);

}
