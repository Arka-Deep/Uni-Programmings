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



    printf("\n Enter number to send\n");
    int num;
    scanf("%d",&num);
    sendto(fd,&num,sizeof(num),0,(struct sockaddr *)&serv,sizeof(serv));


    int z=sizeof(serv);
    int ans;
    recvfrom(fd,&ans,sizeof(ans),0,(struct sockaddr *)&serv,&z);

    if(ans==0){
        printf("Not a Palindrome \n");
    }else{
        printf("Palindrome");
    }
    return 0;
}
