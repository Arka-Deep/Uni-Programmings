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


    int cl1;
    recv(client_fd, &cl1, sizeof(cl1), 0);
    printf("Client1: %d", cl1);
    

    int cl2;
    recv(client_fd2, &cl2, sizeof(cl2), 0);
    printf("Client2: %d", cl2);


    send(client_fd, &cl2, sizeof(cl2), 0);
    send(client_fd2, &cl1, sizeof(cl1), 0);


    printf("Send swapped values to both clients");


}
