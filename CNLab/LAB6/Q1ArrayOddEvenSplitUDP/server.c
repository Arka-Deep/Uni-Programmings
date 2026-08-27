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

    printf("Enter size of arr \n");

    int n;
    scanf("%d",&n);

    int arr[n];
    printf("\n Enter %d numbers for the arr\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pr(arr,n);

    int ev=0,od=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ev++;
        }else{
            od++;
        }
    }

    int arr_ev[ev];
    int arr_od[od];

    for(int i=0,j=0,k=0;i<n;i++){
        if(arr[i]%2==0){
            arr_ev[j]=arr[i];
            j++;
        }else{
            arr_od[k]=arr[i];
            k++;
        }
    }


    int ch1;
   
    recv(client_fd, &ch1, sizeof(ch1), 0);
    printf("Client1 choice-> %d\n", ch1);

    if(ch1==1){
        send(client_fd,&ev,sizeof(ev),0);
        send(client_fd,arr_ev,sizeof(arr_ev),0);
    }else if(ch1==2){
        send(client_fd,&od,sizeof(od),0);
        send(client_fd,arr_od,sizeof(arr_od),0);
    }else{
        int err=-1;
        send(client_fd,&err,sizeof(err),0);
    }
    printf("Client 1 send complete\n");

    int ch2;
   
    recv(client_fd2, &ch2, sizeof(ch2), 0);
    printf("Client2 choice-> %d\n", ch2);

    if(ch2==1){
        send(client_fd2,&ev,sizeof(ev),0);
        send(client_fd2,arr_ev,sizeof(arr_ev),0);
    }else if(ch2==2){
        send(client_fd2,&od,sizeof(od),0);
        send(client_fd2,arr_od,sizeof(arr_od),0);
    }else{
        int err=-1;
        send(client_fd2,&err,sizeof(err),0);
    }
    printf("Client 2 send complete\n");




}
