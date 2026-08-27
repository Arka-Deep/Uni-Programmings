#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>

typedef struct stud
{
    int roll;
    char name[30];
    int m1;
    int m2;
    
}stud;


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

    printf("\nEnter Roll:  \n");
    int x;
    scanf("%d",&x);
    send(fd, &x, sizeof(x), 0);

    recv(fd,&x,sizeof(x),0);

    if(x==-1){
        printf("Roll NOt found\n");
        return 0;
    }
    stud recvData;

    recv(fd, &recvData, sizeof(recvData), 0);

    printf("Roll: %d \nName: %s \nMarks1: %d \n Marks2: %d \n",recvData.roll,recvData.name,recvData.m1,recvData.m2);

    
    
    return 0;
}
