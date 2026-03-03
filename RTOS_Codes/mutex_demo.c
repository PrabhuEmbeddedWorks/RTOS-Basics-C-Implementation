#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int counter = 0;                 // Shared resource
pthread_mutex_t lock;            // Mutex variable

void* increment(void* arg)
{
    for(int i = 0; i < 5; i++)
    {
        pthread_mutex_lock(&lock);     // Lock mutex

        counter++;
        printf("Thread %ld: Counter = %d\n", (long)arg, counter);

        sleep(1);

        pthread_mutex_unlock(&lock);   // Unlock mutex
    }
    return NULL;
}

int main()
{
    pthread_t t1, t2;

    pthread_mutex_init(&lock, NULL);

    pthread_create(&t1, NULL, increment, (void*)1);
    pthread_create(&t2, NULL, increment, (void*)2);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&lock);

    printf("Final Counter Value: %d\n", counter);

    return 0;
}