#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <string.h>

typedef struct stud
{
    int roll;
    char name[30];
    int m1;
    int m2;
    
}stud;


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



    int len=2;
    stud arr[len];
    arr[0].roll=36;
    strcpy(arr[0].name, "Arka");
    arr[0].m1=91;
    arr[0].m2=93;
    arr[1].roll=5;
    strcpy(arr[1].name, "Anmol");
    arr[1].m1=96;
    arr[1].m2=87;

    int roll;
    printf("\nWaiting for msg from client 1\n");
    int z = sizeof(roll);
    int ans =-1;
    recv(client_fd, &roll, sizeof(roll),0);
        for(int i=0;i<len;i++){
        if(arr[i].roll==roll){
            ans=i;
            break;
        } 
    }
    printf("\nDAta send to client:1\n");

    send(client_fd,&ans,sizeof(ans),0);
    if(ans!=-1){
        send(client_fd, &arr[ans], sizeof(stud), 0);

    }
    printf("Client 1 send complete\n");


    printf("\nWaiting for msg from client 2\n");
    z = sizeof(roll);
    ans =-1;
    recv(client_fd2, &roll, sizeof(roll),0);
        for(int i=0;i<len;i++){
        if(arr[i].roll==roll){
            ans=i;
            break;
        } 
    }
    printf("\nDAta send to client:2\n");

    send(client_fd2,&ans,sizeof(ans),0);
    if(ans!=-1){
        send(client_fd2, &arr[ans], sizeof(stud), 0);

    }
    printf("Client 2 send complete\n");




}
