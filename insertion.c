#include <math.h> 
#include <stdio.h> 
   
// Insertion Sort Function
void insertion(int a[], int n) 
{ 
    int i, temp, j; 
    for (i = 1; i < n; i++) { 
        temp = a[i]; 
        j = i - 1; 
        while (j >= 0 && a[j] > temp) { 
            a[j + 1] = a[j]; 
            j = j - 1; 
        } 
        a[j + 1] = temp; 
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
    insertion(arr, 5);
    for ( i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    
    
}