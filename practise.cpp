
#include <iostream>
using namespace std;

// Fixed spelling from partician to partition
int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int count = 0;
    
    // Fixed: used ';' instead of ',' in the for loop
    // Fixed logic: count elements smaller than or equal to pivot for ascending sort
    for(int i = s + 1; i <= e; i++) {
        if(arr[i] <= pivot) { 
            count++;
        }
    }
    
    // Fixed: case sensitivity (pivotIndex instead of pivotindex)
    int pivotIndex = count + s;
    swap(arr[s], arr[pivotIndex]);
    
    int i = s;
    int j = e;
    
    while(i < pivotIndex && j > pivotIndex) {
        // Find an element on the left that is strictly greater than the pivot
        while(arr[i] <= pivot) {
            i++;
        }
        // Find an element on the right that is smaller than or equal to the pivot
        while(arr[j] > pivot) {
            j--;
        }
        
        // If we found elements on the wrong side, swap them
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    // CRITICAL FIX: You must return the pivotIndex so quick_sort knows where to split!
    return pivotIndex; 
}

void quick_sort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }
    // Fixed spelling to match the function name
    int p = partition(arr, s, e);
    
    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
}