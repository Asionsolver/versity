#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    fork();
    fork();
    printf("This program process id = %d\n", getpid());
}