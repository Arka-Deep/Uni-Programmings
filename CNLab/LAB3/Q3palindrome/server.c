#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int isPalindrome(int num){
    int num1=num,rev=0;

    while(num1!=0){
        int ld=num1%10;
        rev=(rev*10)+ld;
        num1/=10;
    }
    if(rev==num){
        return 1;
    }else{
        return 0;
    }
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
    serv.sin_addr.s_addr=INADDR_ANY;
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
    int num;
    recvfrom(fd,&num,sizeof(num),0,(struct sockaddr *)&cli,&z);
    
    int ans=isPalindrome(num);
    sendto(fd,&ans,sizeof(ans),0,(struct sockaddr *)&cli,sizeof(cli));

    printf("Data Sent back to client:\n");
}
