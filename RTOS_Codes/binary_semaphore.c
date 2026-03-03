#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t sem;   // Binary semaphore

void* task1(void* arg)
{
    printf("Task1 Waiting for signal...\n");

    sem_wait(&sem);  // Wait (P operation)

    printf("Task1 Received Signal!\n");

    return NULL;
}

void* task2(void* arg)
{
    sleep(2);

    printf("Task2 Sending Signal...\n");

    sem_post(&sem);  // Signal (V operation)

    return NULL;
}

int main()
{
    pthread_t t1, t2;

    sem_init(&sem, 0, 0);  // Initialize with 0

    pthread_create(&t1, NULL, task1, NULL);
    pthread_create(&t2, NULL, task2, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    sem_destroy(&sem);

    return 0;
}