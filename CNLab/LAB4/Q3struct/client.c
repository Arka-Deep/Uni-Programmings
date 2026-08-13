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
    // client details
    struct sockaddr_in cl;
    cl.sin_family = AF_INET;
    cl.sin_port = 6000;
    cl.sin_addr.s_addr = inet_addr("127.0.0.1");
    int b = bind(fd, (struct sockaddr *)&cl, sizeof(cl));
    printf("BInd returned: %d\n", b);
    if (b == 0)
    {
        printf("Bind succesful");
    }
    else
    {
        printf("Bind Unsuccesfull");
    }
    // server details
    struct sockaddr_in serv;
    serv.sin_family = AF_INET;
    serv.sin_port = 6001;
    serv.sin_addr.s_addr = inet_addr("127.0.0.1");

    printf("\nEnter the roll to send: ");
    int roll;
    scanf("%d",&roll);

    sendto(fd, &roll, sizeof(roll), 0, (struct sockaddr *)&serv, sizeof(serv));
    
    int ans;

    stud recvData;
    int z = sizeof(serv);

    recvfrom(fd, &ans, sizeof(ans), 0, (struct sockaddr *)&serv, &z);
    if(ans==-1){
        printf("No such record found\n");
    }else{
        recvfrom(fd, &recvData, sizeof(recvData), 0, (struct sockaddr *)&serv, &z);

        printf("Roll: %d \nName: %s \nMarks1: %d \n Marks2: %d \n",recvData.roll,recvData.name,recvData.m1,recvData.m2);
    }
    

    
    return 0;
}
