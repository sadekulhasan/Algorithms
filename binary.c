#include <stdio.h>

int binarySearch(int A[], int n, int target)
{
    // search space is nums[low…high]
    int left = 0, right = n - 1;
 
    // loop till the search space is exhausted
    while (left <= right)
    {
        // find the mid-value in the search space and
        // compares it with the target
 
        int mid = (left + right)/2;    // overflow can happen
        // int mid = low + (high - low)/2;
        // int mid = high - (high - low)/2;
 
        // target value is found
        if (target == A[mid]) {
            return mid;
        }
 
        // if the target is less than the middle element, discard all elements
        // in the right search space, including the middle element
        else if (target > A[mid]) {
            left = mid + 1;
        }
 
        // if the target is more than the middle element, discard all elements
        // in the left search space, including the middle element
        else {
            right = mid - 1;
        }
    }
 
    // target doesn't exist in the array
    return -1;
}
 
int main(void)
{
    int nums[] = { 2, 5, 6, 8, 9, 10 };
    int target = 6;
 
    int n = sizeof(nums)/sizeof(nums[0]);
    int result = binarySearch(nums, n, target);
 
    if (result != -1) {
        printf("Element found at index %d", result);
    }
    else {
        printf("Element not found in the array");
    }
 
    return 0;
}