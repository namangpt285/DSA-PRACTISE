
#include <algorithm>



#include <iostream>
using namespace std;

void Selection_srt(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            swap(arr[min_index], arr[i]);
        }
    }
}

int main() {
    int num[1000], size;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    Selection_srt(num, size);

    cout << "The sorted array is : ";
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }

    return 0;
}