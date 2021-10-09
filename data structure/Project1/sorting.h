
#include <iostream>

using namespace std;

inline void swap_fn(int * pnum1 , int *pnum2)
{
	int temp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = temp;
}

void insertionsort(int arr[] , int n)
{
    int i , value , pivot;

    for(i = 1 ; i < n ; i++)
    {
		pivot = i;
        while((arr[pivot] < arr[pivot - 1]))
        {
			swap_fn(arr + pivot , arr + pivot-1);
            pivot = pivot -1;           
        }

    }

}




void Bubblesort_descending(int arr[] , int n)
{
	int i , j , flag = 0;
	for( i = 0 ; i < n ; i++)
	{
		flag = 0;
		for(j = n-1 ; j>i ; j--)
		{
			if(arr[j] > arr[i])	/* sort descending */
			{
				swap_fn(arr+i , arr+j);
				flag = 1;
			}
			
		}
		if(!flag) return ;
	}
}

void Bubblesort_ascending(int arr[] , int n)
{
	int i , j ;bool flag = false;
	for(i = 0 ; i < n ; i++)
	{
		for(j = i + 1; j < n ; j++)
		{
			if(arr[i] > arr[j])
			{
				swap_fn(arr+i , arr+j);
				flag = true;
			}
		}
		if(flag == false) return;
	}

}

void selection_sort(int arr[] , int n)
{
	int i , j , imin;
	for( i = 0 ; i < n ; i++)
	{
		imin = i;
		for(j = i ; j < n ; j++)
		{
			if(arr[imin] < arr[j])
			{
				imin = j;
			}
			swap_fn(arr+i , arr+imin);
		}
	}
}
