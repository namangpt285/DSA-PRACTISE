#include <iostream>
using namespace std;
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

int quickselect(int arr[], int s, int e, int k) {
    // 1. Base case: If we narrowed it down to 1 element, return it.
    if(s == e){
        return arr[s];
    }

    int p = partition(arr, s, e);
    
    // 2. We found it!
    if(k == p){
        return arr[p];
    }
    // 3. Search Left
    else if(k < p){
        // Ensure you return the result of the recursive call
        return quickselect(arr, s, p - 1, k); 
    }
    // 4. Search Right
    else {
        return quickselect(arr, p + 1, e, k);
    }
}
int main() {
    // Unsorted array
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // We want to find the 3rd smallest element
    int k = 3; 
    
    // We pass k - 1 because arrays are 0-indexed. 
    // The 1st smallest is at index 0, the 3rd smallest is at index 2.
    int result = quickselect(arr, 0, n - 1, k - 1);
    
    cout << "The array has " << n << " elements." << endl;
    cout << "The " << k << "rd smallest element is: " << result << endl;
    
    // (If the array was sorted, it would be: 3, 4, 5, 7, 12, 19, 26)
    // (The 3rd smallest is indeed 5)

    return 0;
}