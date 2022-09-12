#include <stdio.h>
int main()
{
    int i, n, data;
    int a[10];
    int found = 0;

    printf("Enter the number of n: ");
    scanf("%d", &n);
    printf("\n");
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("Enter the num you want to search: ");
    scanf("%d", &data);
    
    for (i = 0; i < n; i++)
    {
        if (a[i] == data)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("Data found at %d position: ", i + 1);
    }
    else
    {
        printf("Data not found");
    }

    return 0;
}