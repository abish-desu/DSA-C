// wap to find maximum element in an array

#include <stdio.h>
int maximum(int arr[], int len)
{

    int max = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
        max  = arr[i];
        }
    }
    printf("maximum number from array  is %d",max);
}
int main()
{
    int arr[] = {4, 8, 87, 9, 10, 7, 71, 8};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    maximum(arr, arr_length);
}