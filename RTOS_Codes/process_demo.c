#include <stdio.h>
#include <unistd.h>   // for fork()
#include <sys/types.h>

int main()
{
    pid_t pid;

    printf("Before fork()\n");

    pid = fork();  // Create new process

    if (pid < 0)
    {
        printf("Fork failed\n");
    }
    else if (pid == 0)
    {
        // Child process
        printf("Child Process\n");
        printf("Child PID: %d\n", getpid());
    }
    else
    {
        // Parent process
        printf("Parent Process\n");
        printf("Parent PID: %d\n", getpid());
        printf("Child PID from parent: %d\n", pid);
    }

    printf("Process execution complete\n");

    return 0;
}