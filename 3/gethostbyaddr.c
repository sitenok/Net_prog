#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>

void error_handling(char *message);

int main(int argc, char *argv[])
{
    int i;
    struct hostent *host;
    struct sockaddr_in addr;
    if (argc != 2)
    {
        printf("Usage: %s <addr>\n", argv[0]);
        exit(1);
    }
}