#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>
int main()
{
    int fd;
    fd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in cli;
    cli.sin_family = AF_INET;
    cli.sin_port = htons(6000);
    cli.sin_addr.s_addr = inet_addr("127.0.0.1");
    bind(fd, (struct sockaddr *)&cli, sizeof(cli));
    listen(fd, 5);
    struct sockaddr_in temp;
    socklen_t len = sizeof(temp);
    while (1)
    {
        int newfd1 = accept(fd, (struct sockaddr *)&temp, &len);
        int a, b;
        char op;
        float result;
        recv(newfd1, &a, sizeof(a), 0);
        recv(newfd1, &b, sizeof(b), 0);
        recv(newfd1, &op, sizeof(op), 0);
        if (op == '+')
            result = a + b;
        else if (op == '-')
            result = a - b;
        else if (op == '*')
            result = a * b;
        else if (op == '/')
            result = (float)a / b;
        send(newfd1, &result, sizeof(result), 0);
        close(newfd1);
    }
    return 0;
}