#include <unistd.h>
#include <pthread.h>
#include <stdio.h>


void * run(void* vargp)
{
    sleep(1);
    printf("%d\n" , ((int*) vargp)[0]);
    return NULL;
}

int names[] = {1,2,3,4,5};

pthread_t handles[5] = {0};

void start(int name)
{
    pthread_create(&handles[name-1] , NULL, run , &names[name-1]);
}

void join(int name)
{
    pthread_join(handles[name-1] , NULL);
}

int main()
{
    start(5);
    start(3);
    start(1);

    join(3);
    
    start(2);
    
    join(1);
    
    start(4);
    
    join(2);
    join(4);
    join(5);
    
    return 0;
}