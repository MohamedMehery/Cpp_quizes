// 
#include <stdio.h>

typedef struct obj
{

    #pragma pack(4)
    int x;

    #pragma pack(8)
    double d;

    // #pragma pack(1);
    // char c;    

    #pragma pack(1)
    char c;
}O; __attribute__((PACKED))

int main()
{
    printf("Hello %d\n" , 1<<16);
    printf("size of O %d\n" , sizeof(O));
    return 0;
}

