#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int arr[] = {1, 1, 4, 5, 5, 4,4,1,5,5,5,6,6};

int countDuplicates(int len)
{
    int count = 0;
    bool *visited = (bool *)calloc(len, sizeof(bool)); // Dynamically allocate and initialize the boolean array

    for (int i = 0; i < len; i++)
    {
        if (visited[i]) // Skip the element if already visited
        {
            continue;
        }

        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true; // Mark the duplicate element as visited
            }
        }

        visited[i] = true; // Mark the current element as visited
        count++; // Increment count for each unique element
    }

    free(visited); // Free the dynamically allocated memory

    return count;
}

int main()
{
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    int duplicate_count = countDuplicates(arr_length);
    printf("Number of duplicate items: %d\n", duplicate_count);
    return 0;
}

