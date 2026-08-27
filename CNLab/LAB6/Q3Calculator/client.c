#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>

int main(){

int fd;
fd=socket(AF_INET,SOCK_STREAM,0);

struct sockaddr_in cli;
cli.sin_family=AF_INET;
cli.sin_port=6000;
cli.sin_addr.s_addr=inet_addr("127.0.0.1");

connect(fd,(struct sockaddr*)&cli,sizeof(cli));

int a,b;
char op;
float result;
printf("Enter first operand: ");
scanf("%d",&a);
printf("Enter operator (=/-/*//): ");
scanf(" %c",&op);
printf("Enter second operand: ");
scanf("%d",&b);

send(fd,&a,sizeof(a),0);
send(fd,&b,sizeof(b),0);
send(fd,&op,sizeof(op),0);
recv(fd,&result,sizeof(result),0);
printf("Result: %.2f\n",result);
close(fd);
return 0;
}