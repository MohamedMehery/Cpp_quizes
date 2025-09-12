#include <stdio.h>

volatile unsigned short func(int arr[], int indx)
{
    int dp[indx+1] ;
    dp[0] = 1;
    printf("%d\n", sizeof(dp)/sizeof(int) );
    return dp[indx];
}

int main()
{
    int arr[4] = {0};
    printf("%d", func(arr, 4) );
}
