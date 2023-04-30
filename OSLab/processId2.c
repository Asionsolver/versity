#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    pid_t pid = fork();
    if (pid < 0)
    {
        printf("Fork failed\n");
    }
    else if (pid == 0)
    {
        printf("This is the child process\n");
        printf("This program process id = %d\n", getpid());
    }

    else
    {
        printf("This is the parent process\n");
        printf("This program parent process id = %d\n", getpid());
    }
}