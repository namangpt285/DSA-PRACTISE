#include <iostream>
using namespace std;
 void Insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "The sorted array is : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
 }
 int main(){
    int num[1000], size;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "Enter the elements of array :";
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
    Insertion_sort(num, size);
    
    return 0;
}