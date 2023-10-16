#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

void compare_fn(void * elem1 , void * elem2)
{
    if( (*(int * )elem1) > (*(int * )elem2 ))
    {
        int temp = *(int * )elem1;
        *(int * )elem1 = *(int * )elem2;
        *(int * )elem2 = temp;
    }
}

void bubble_sort(int * arr, int size , void (*pf)(void * elem1, void* elem2))
{
    for(int i = 0 ; i < size  - 1; i++)
    {
        for(int j = 0 ; j < size - 1 - i ;j++)
        {
            pf(arr+ j , arr + j + 1);
        }
    }
}

int main(void)
{
    int arr[5] = { 5 , 3, 2, 1, 4};
    bubble_sort(arr, 5 , compare_fn);
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}
