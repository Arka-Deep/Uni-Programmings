#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>


void pr(int arr[],int n){
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

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

    printf("\nChoose: \n1--> Even Arr\n2--> Odd \n");
    int x;
    scanf("%d",&x);
    send(fd, &x, sizeof(x), 0);

    recv(fd,&x,sizeof(x),0);

    if(x==-1){
        printf("invalid choice\n");
        return 0;
    }
    int arr[x];
    recv(fd,arr,sizeof(arr),0);
    pr(arr,x);


    
    
    return 0;
}
