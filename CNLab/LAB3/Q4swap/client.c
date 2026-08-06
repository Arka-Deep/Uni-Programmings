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
    //client details
    struct sockaddr_in cl;
    cl.sin_family=AF_INET;
    cl.sin_port=6000;
    cl.sin_addr.s_addr=inet_addr("127.0.0.1");
    int b=bind(fd,(struct sockaddr *) &cl,sizeof(cl));
    printf("BInd returned: %d\n",b);
    if(b==0){
        printf("Bind succesful");
    }else{
        printf("Bind Unsuccesfull");
    }
    //server details
    struct sockaddr_in serv;
    serv.sin_family=AF_INET;
    serv.sin_port=6001;
    serv.sin_addr.s_addr=inet_addr("127.0.0.1");



    printf("\n Enter two number to send\n");
    int a1,b1;
    scanf("%d %d",&a1,&b1);
    printf("Before Swapping:\n");
    printf("A=: %d , B=: %d\n",a1,b1);
    sendto(fd,&a1,sizeof(a1),0,(struct sockaddr *)&serv,sizeof(serv));
    sendto(fd,&b1,sizeof(b1),0,(struct sockaddr *)&serv,sizeof(serv));


    int z=sizeof(serv);
    
    recvfrom(fd,&a1,sizeof(a1),0,(struct sockaddr *)&serv,&z);
    recvfrom(fd,&b1,sizeof(b1),0,(struct sockaddr *)&serv,&z);

    printf("After Swapping:\n");
    printf("A=: %d , B=: %d\n",a1,b1);
    
    return 0;
}
