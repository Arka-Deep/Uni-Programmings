#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>
//#include <netinet/ip.h>
int main(){
    int fd=socket(AF_INET,SOCK_DGRAM,0); //returns file descriptor and -1 for errors, usually returns 3
    printf("File Descriptor value: %d\n",fd);
    if(fd==-1){
        printf("Socket creation failed\n");
    }else{
        printf("Socket creation Sucessfull\n");
    }

    struct sockaddr_in cl;
    cl.sin_family=AF_INET;
    cl.sin_port=6000;
    cl.sin_addr.s_addr=inet_addr("127.0.0.1");
    int b=bind(fd,(struct sockaddr *) &cl,sizeof(cl));//always returns 0 for success -1 for failure
    printf("BInd returned: %d\n",b);
    if(b==0){
        printf("Bind succesful");
    }else{
        printf("Bind Unsuccesfull");
    }

    char msg[30];
    //gets()
    printf("\n Enter the string to send\n");

    fgets(msg,30,stdin);

    sendto(fd,msg,sizeof(msg),0,(struct sockaddr *)&cl,sizeof(cl));
    
    return 0;
}
