#include<stdio.h>

void selection(int A[], int n){
    int i, j, temp, min;
    for ( i = 0; i < n-1; i++)
    {
        min = i;
        for ( j = i+1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
            
        }
        if (min != i)
            {
            temp = A[i];
            A[i] = A[min];
            A[min] = temp;
            }
        
    }
    
}

int main(){
    int arr[5] = {3,1,5,2,4};
    int i;
    printf("Array: \n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("selection sort in ascending: \n");
    selection(arr, 5);
    for ( i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    
    
}