#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>

void bubbleSort(int arr[], int n) {
    int temp;
    int swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        

        if (!swapped) {
            break;
        }
    }
}

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

    int arr[6];
    
    printf("\nWaiting for msg from server\n");
    int z = sizeof(arr);
    recvfrom(fd, arr, z, 0, (struct sockaddr *)&cli, &z);
    bubbleSort(arr,6);
    printf("\nSending back sorted arr: \n");
    sendto(fd, arr, sizeof(arr), 0, (struct sockaddr *)&cli, sizeof(cli));
}
