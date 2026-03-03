#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* thread_function(void* arg)
{
    for(int i = 1; i <= 5; i++)
    {
        printf("Thread Running: %d\n", i);
        sleep(1);
    }
    return NULL;
}

int main()
{
    pthread_t thread1;

    printf("Main Program Started\n");

    // Create thread
    pthread_create(&thread1, NULL, thread_function, NULL);

    for(int i = 1; i <= 5; i++)
    {
        printf("Main Running: %d\n", i);
        sleep(1);
    }

    // Wait for thread to finish
    pthread_join(thread1, NULL);

    printf("Main Program Ended\n");

    return 0;
}