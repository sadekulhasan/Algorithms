#include <stdio.h>

void bubble(int A[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int i;
    int arr[5] = {6, 1, 4, 2, 9};
    printf("Array: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("Bubble sort in ascending: \n");
    bubble(arr, 5);
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}