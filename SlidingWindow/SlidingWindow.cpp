#include <stdlib.h>
#include <stdio.h>

int bruteforce_slidingWindow(int arr [], int arr_size, int max_subarray) // BRUTE FORCE
{
    int ret = 0;

    for(int i=0; i < arr_size - max_subarray+1; i++ )
    {
        int half_sum=0;
        for(int j=0; j < max_subarray;j++)
        {
            half_sum = half_sum + arr[i+j];
        }

        if(half_sum > ret)
            ret = half_sum;
    }
    return ret;
}

int slidingWindow(int arr [], int arr_size, int max_subarray) // SLIDING WINDOW 
{
    int ret = 0;
    int max = 0;
    for(int i=0; i<max_subarray;i++)
    {
        ret += arr[i]; 
    }

    max = ret;

    for(int i = 1; i < arr_size - max_subarray + 1; i++)
    {
        ret = ret - arr[i -1 ] + arr[max_subarray + i - 1];
        if(ret > max)
            max = ret;
    }
    return max;
}

int main()
{
    int arr_size = 8;
    int sub_array_size = 4;
    int arr[arr_size] = {1,3,5,4,2,5,7,4};

    printf("brute_force: %d\n", bruteforce_slidingWindow(arr, arr_size, sub_array_size)); // BRUTE FORCE
    printf("slidingwindow %d\n", slidingWindow(arr, arr_size, sub_array_size)); // SLIDING WINDOW 

    return 0;
}

