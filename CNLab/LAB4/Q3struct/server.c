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


int main()
{   
    int fd = socket(AF_INET, SOCK_DGRAM, 0);
    printf("File Descriptor value: %d\n", fd);
    if (fd == -1)
    {
        printf("Socket creation failed\n");
    }
    else
    {
        printf("Socket creation Sucessfull\n");
    }
    // server details
    struct sockaddr_in serv;
    serv.sin_family = AF_INET;
    serv.sin_port = 6001;
    serv.sin_addr.s_addr = inet_addr("127.0.0.1");
    int b = bind(fd, (struct sockaddr *)&serv, sizeof(serv));
    printf("BInd returned: %d\n", b);
    if (b == 0)
    {
        printf("Bind succesful\n");
    }
    else
    {
        printf("Bind Unsuccesfull\n");
    }
    // client details
    struct sockaddr_in cli;
    int len=1;
    stud arr[len];
    arr[0].roll=36;
    strcpy(arr[0].name, "Arka");
    arr[0].m1=91;
    arr[0].m2=93;


    int roll;
    printf("\nWaiting for msg from server\n");
    int z = sizeof(roll);
    recvfrom(fd, &roll, z, 0, (struct sockaddr *)&cli, &z);
    
    int ans =-1;

    for(int i=0;i<len;i++){
        if(arr[i].roll==roll){
            ans=i;
            break;
        } 
    }
    printf("\nDAta send to client\n");

    sendto(fd, &ans, sizeof(ans), 0, (struct sockaddr *)&cli, sizeof(cli));
    if(ans!=-1){
        sendto(fd, &arr[ans], sizeof(stud), 0, (struct sockaddr *)&cli, sizeof(cli));

    }

}
