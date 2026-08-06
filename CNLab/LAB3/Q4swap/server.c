#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>

void swap(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}

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

    
    int z=sizeof(cli);
    int a1,b1;
    recvfrom(fd,&a1,sizeof(a1),0,(struct sockaddr *)&cli,&z);
    recvfrom(fd,&b1,sizeof(b1),0,(struct sockaddr *)&cli,&z);
    swap(&a1,&b1);

    sendto(fd,&a1,sizeof(a1),0,(struct sockaddr *)&cli,sizeof(cli));
    sendto(fd,&b1,sizeof(b1),0,(struct sockaddr *)&cli,sizeof(cli));

    printf("Data sent back to client");

}
